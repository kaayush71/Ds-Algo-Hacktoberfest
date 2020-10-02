#--------------------------------------------------------------------API REQUEST-------------------------------------------------------------------------------------------------
import requests
from random import choice
term = input("Let me tell you a joke! Give me a topic: ")
if len(term.strip()) == 0:
    print("Plase specify a topic")
else:
    try:
        response_json = requests.get(
            "https://icanhazdadjoke.com/search",
            headers={"Accept": "application/json"},
            params={"term": term}
        ).json()
    except Exception as api_exception:
        response_json = {}
    results = response_json.get("results", None)
    total_jokes = response_json.get("total_jokes", 0)
    if total_jokes > 1:
        print(
            f"I've got {total_jokes} jokes about {term}. Here's one:\n",
            choice(results)['joke']
        )
    elif total_jokes == 1:
        print(
            f"I've got one joke about {term}. Here it is:\n",
            results[0]['joke']
        )
    else:
        print(f"Sorry, I don't have any jokes about {term}! Please try again.")
