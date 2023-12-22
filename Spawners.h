#ifndef SPAWNER_H_
#define SPAWNER_H_

class Spawners
{
public:
    static const int mapWidth  = 800;
    static const int mapHeight = 450;
    static const int treeSymbol = 1;
    static const int personSymbol = 2;

    void InitializeMap();
    bool SpotChecker(int posX, int posY);
    void TreeSpawner();
    void PersonSpawner();
    void Spawner();

    Spawners();
    ~Spawners();

private:
    int** map;
};

#endif