class DoubleLinkedList<T>
{
  private T value;
  private LinkedList<T> next;
  private LinkedList<T> prev;

  public DoubleLinkedList(LinkedList<T> prev, T value, LinkedList<T> next) {
    SetPrev(prev);
    SetValue(value);
    SetNext(next);
  }

  public DoubleLinkedList(T value) : this(null, value, null){}

  public LinkedList<T> GetPrev() {
    return prev;
  }

  public T GetValue() {
    return value;
  }

  public LinkedList<T> GetNext() {
    return next;
  }

  public void SetPrev(LinkedList<T> prev) {
    this.prev = prev;
  }

  public void SetValue(T value) {
    this.value = value;
  }

  public void SetNext(LinkedList<T> next) {
    this.next = next;
  }
}