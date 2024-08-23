#include <iostream>
#include <string>

enum ItemType{
    ITEMTYPE_SWORD,
    ITEMTYPE_TORCH,
    ITEMTYPE_POTION
};

std::string getItemName(ItemType itemType)
{
    if(itemType == ITEMTYPE_SWORD)
        return std::string("Sword");
    if(itemType == ITEMTYPE_TORCH)
        return std::string("Torch");
    if(itemType == ITEMTYPE_POTION)
        return std::string("Potion");           

    // Just in case we add a new item in the future and forget to update this function
    return std::string("???");
}

int main(){
    ItemType itemType = ITEMTYPE_TORCH;
    std::cout<<"You are carrying a"<<getItemName(itemType)<<"\n";

    return 0;
}