import yaml


class Character:
    def __init__(self, name, meta):
        self.name = name
        self.meta = meta
    def toString(self):
        return str("Name:\t" + self.name + "\tMeta:\t" + self.meta)

if __name__ == "__main__":
    data = 0
    with open('players/desmond.yaml') as f:
        data = yaml.load(f, Loader=yaml.FullLoader)
        print(data)
    
        
    #print("test")
    dante = Character("Dante", "Human")
    #print(dante.toString())
    with open("players/test.yaml", 'w') as f:
        yaml.dump(dante, f, default_flow_style=False)
