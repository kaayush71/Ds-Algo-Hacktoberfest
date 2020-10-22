using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FirstApp
{
    class LinkedList<T>: ICollection<T> where T:IComparable<T>
    {
        internal class LinkedListNode<T>
        {
            public T info;
            public LinkedListNode<T> next;
            public LinkedListNode(T data, LinkedListNode<T>next= null)
            {
                info = data;
                this.next = next;
            }
        }

        public LinkedListNode<T> _first;
        public LinkedListNode<T> _last;

        private class Enumerator:IEnumerator<T>
        {
            private LinkedListNode<T> _first;
            private LinkedListNode<T> _current;
            private bool atBegin;

            public Enumerator(LinkedListNode<T> first)
            {
                _first = first;
                _current = null;
                atBegin = true;
            }
            public void Dispose() { }

            public bool MoveNext()
            {
                if(atBegin)
                {
                    atBegin = false;
                    _current = _first;
                    return true;
                }
                else
                {
                    _current = _current.next;
                    return _current != null;
                }
            }

            public void Reset()
            {
                atBegin = true;
                _current = null;
            }

            public T Current {
                get { return _current.info; }
            }

            object IEnumerator.Current
            {
                get { return Current; }
            }
        }

        public IEnumerator<T> GetEnumerator()
        {
            return new Enumerator(_first);
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return GetEnumerator();
        }

        void ICollection<T>.Add(T item)
        {
            LinkedListNode<T> tmp = new LinkedListNode<T>(item, null);
            if(Count==0)
                _first = tmp;
            else
                _last.next = tmp;
            _last = tmp;
            ++Count;
        }

        public void AddLast(T item)
        {
            ((ICollection<T>) this).Add(item);
        }

        public void Clear()
        {
            _first = null;
            _last = null;
            Count = 0;
        }

        public bool Contains(T item)
        {
            foreach (var x in this)
                if (x.Equals(item))
                   return true;
            return false;
        }

        public void CopyTo(T[] array, int arrayIndex)
        {
            int i = arrayIndex;
            foreach(var item in this)
            {
                array[i] = item;
                ++i;
            }
        }

        public bool Remove(T item)
        {
            if(_first!=null&&_first.info.Equals(item))
            {
                _first = _first.next;
                --Count;
                return true;
            }
            else
            {
                LinkedListNode<T> before = FindPrev(item);
                if (before == null)
                    return false;
                before.next = before.next?.next;
                --Count;
                return true;
            }
        }

        private LinkedListNode<T> FindPrev(T item)
        {
            var prev = _first;
            var cur = _first?.next;
            while (cur != null)
            {
                if (cur.info.Equals(item))
                    return prev;
                prev = cur;
                cur = cur.next;
            }
            return null;
        }

        public int Count { get; private set; }

        public bool IsReadOnly => false;

        public void InsertionSort()
        {
            LinkedListNode<T> old = _first;
            _first = null;
            while(old!= null)
            {
                LinkedListNode<T> tmp = old;
                old = old.next;
                tmp.next = null;
                Insert(tmp);
            }
        }

        private void Insert(LinkedListNode<T> tmp)
        {
            if (_first == null)
            {
                _first = tmp;
                _last = tmp;
            }
            else if(_first.info.CompareTo(tmp.info)>=0)
            {
                tmp.next = _first;
                _first = tmp;
            }
            else if(_last.info.CompareTo(tmp.info)<=0)
            {
                _last.next = tmp;
                _last = tmp;
            }
            else
            {
                LinkedListNode<T> prev = _first;
                LinkedListNode<T> cur = _first?.next;
            
                while(cur!=null&&cur.info.CompareTo(tmp.info)<0)
                {
                    prev = cur;
                    cur = cur.next;
                }
                tmp.next = cur;
                prev.next = tmp;
            }
        }

        private void Insert(ref LinkedListNode<T>first ,LinkedListNode<T> tmp)
        {
            if (first == null)
            {
                first = tmp;
            }
            else if (first.info.CompareTo(tmp.info) >= 0)
            {
                tmp.next = first;
                first = tmp;
            }
            else
            {
                LinkedListNode<T> prev = first;
                LinkedListNode<T> cur = first?.next;

                while (cur != null && cur.info.CompareTo(tmp.info) < 0)
                {
                    prev = cur;
                    cur = cur.next;
                }
                tmp.next = cur;
                prev.next = tmp;
            }
        }

        public void MergeSort()
        {
            MergeSort(ref _first, Count);
        }

        private LinkedListNode<T> GetMid(ref LinkedListNode<T> first, int count)
        {
            int mid = count / 2;
            LinkedListNode<T> t = first;
            for (int i = 0; i < mid-1; ++i)
                t = t.next;
            return t;
        }

        private void MergeSort(ref LinkedListNode<T> first, int count)
        {
            if (count < 2) return;

            var t = GetMid(ref first, count);

            LinkedListNode<T> right = t.next;
            t.next = null;

            MergeSort(ref first, count/2);
            MergeSort(ref right, count - count/2);

            first = Merge(t, right);
        }

        private LinkedListNode<T> Merge(LinkedListNode<T> left, LinkedListNode<T> right)
        {
            LinkedListNode<T> rbegin,rend;//=left, rend=left;
            if(left.info.CompareTo(right.info)<0)
            {
                rbegin = left;
                rend = left;
                left = left.next;
            }
            else
            {
                rbegin = right;
                rend = right;
                right = right.next;
            }

            while(left!=null&&right!=null)
            {
                while(left != null && left.info.CompareTo(right.info)<=0)
                {
                    rend.next = left;
                    rend = rend.next;
                    left = left.next;
                }
                if (left == null)
                    break;
                while (right.info.CompareTo(left.info) <= 0)
                {
                    rend.next = right;
                    rend = rend.next;
                    right = right.next;
                    if (right == null)
                        break;
                }
            }
            while(left!= null)
            {
                rend.next = left;
                rend = rend.next;
                left = left.next;
            }
            while (right != null)
            {
                rend.next = right;
                rend = rend.next;
                right = right.next;
            }
            rend.next = null;
            return rbegin;

            //LinkedListNode<T> result = null,tmp;

            //while(left!= null)
            //{
            //    tmp = left;
            //    left = left.next;
            //    tmp.next = null;
            //    Insert(ref result, tmp);
            //}
            //while (right != null)
            //{
            //    tmp = right;
            //    right = right.next;
            //    tmp.next = null;
            //    Insert(ref result, tmp);
            //}
            //return result;
        }

        //private LinkedListNode<T> PopFirst()
        //{
        //    var tmp = _first;
        //    _first = _first?.next;
        //    return tmp;
        //}
    }
    
    class Program
    {
        static void Main(string[] args)
        {
            LinkedList<int> x = new LinkedList<int>();
            x.AddLast(3);
            x.AddLast(2);
            x.AddLast(5);
            x.AddLast(1);
            x.AddLast(4);
            foreach (var item in x)
                Console.Write(item + " ");
            Console.WriteLine();

            x.MergeSort();
            foreach (var item in x)
                Console.Write(item + " ");
            Console.WriteLine();

            //for (var i = x._first; i != null; i = i.next)
            //    Console.WriteLine(i.info);

            //System.Collections.Generic.LinkedList<int> l = new System.Collections.Generic.LinkedList<int>();

            //var sw = new System.Diagnostics.Stopwatch();
            //sw.Start();
            //for (int i=0; i<10000000; i++)
            //{
            //    l.AddLast(i);

            //    l.AddFirst(i);
            //}
            //sw.Stop();
            //Console.WriteLine(sw.ElapsedMilliseconds);
            //Console.ReadKey();

            //List<int> ll = new List<int>();
            //sw.Restart();
            //for (int i = 0; i < 10000000; i++)
            //{
            //    ll.Add(i);
            //    ll.Insert(0, i);
            //}
            //sw.Stop();
            //Console.WriteLine(sw.ElapsedMilliseconds);



        }
    }
}
