#include "CLMapStock.h"

// Sélection de tous les articles dans la base de données
System::String^ NS_Comp_Map_Stock::CLMapStock::SelectAll(void)
{
    return  "SELECT R_A AS [Référence], "
            "N_A AS [Nom], "
            "QC_A AS [Quantité dans les paniers], "
            "QS_A AS [Quantité en stock], "
            "RT_A AS [Seuil de réapprovisionnement], "
            "HT_A AS [Prix HT], "
            "TVA_A AS TVA, "
            "D_A AS [Description] "
            "FROM ARTICLE; ";
}

// Sélection d'un article spécifique en fonction de sa référence
System::String^ NS_Comp_Map_Stock::CLMapStock::Select(void)
{
    return  "SELECT * FROM ARTICLE WHERE R_A = '" + getR_A() + "'; ";
}

// Insertion d'un nouvel article dans la base de données
System::String^ NS_Comp_Map_Stock::CLMapStock::Insert(void)
{
    return  "INSERT INTO Article (R_A, N_A, QC_A, QS_A, RT_A, HT_A, TVA_A, D_A) VALUES('" + getR_A() + "', '" + getN_A() + "', NULL, " + getQS_A() + ", " + getRT_A() + ", " + getHT_A() + ", " + getTVA_A() + ", '" + getD_A() + "');";
}

// Suppression d'un article de la base de données
System::String^ NS_Comp_Map_Stock::CLMapStock::Delete(void)
{
    return  "IF NOT EXISTS ( "
            "SELECT 1 "
            "FROM composed "
            "WHERE ID_A = (SELECT ID_A FROM Article WHERE R_A = '" + getR_A() + "')) "
            "BEGIN "
            "DELETE FROM Article WHERE R_A = '" + getR_A() + "' AND N_A = '" + getN_A() + "'; "
            "SELECT 'Article supprimé ou inexistant' AS Message; "
            "END "
            "ELSE "
            "BEGIN "
            "SELECT 'Article présent dans une commande, ne peut pas être supprimé' AS Message; "
            "END; ";
}

// Mise à jour des informations d'un article dans la base de données
System::String^ NS_Comp_Map_Stock::CLMapStock::Update(void)
{
    return  "UPDATE Article SET QS_A = " + getQS_A() + ", HT_A = " + getHT_A() + ", RT_A = " + getRT_A() + ", TVA_A = " + getTVA_A() + ", D_A = '" + getD_A() + "' WHERE R_A = '" + getR_A() + "';";
}

// Définition de l'ID de l'article
void NS_Comp_Map_Stock::CLMapStock::setID_A(System::String^ ID_A)
{
    this->ID_A = ID_A;
}

// Définition de la référence de l'article
void NS_Comp_Map_Stock::CLMapStock::setR_A(System::String^ R_A)
{
    this->R_A = R_A;
}

// Définition du nom de l'article
void NS_Comp_Map_Stock::CLMapStock::setN_A(System::String^ N_A)
{
    this->N_A = N_A;
}

// Définition de la quantité dans les paniers de l'article
void NS_Comp_Map_Stock::CLMapStock::setQS_A(System::String^ QS_A)
{
    this->QS_A = QS_A;
}

// Définition du prix HT de l'article
void NS_Comp_Map_Stock::CLMapStock::setHT_A(System::String^ HT_A)
{
    this->HT_A = HT_A;
}

// Définition du seuil de réapprovisionnement de l'article
void NS_Comp_Map_Stock::CLMapStock::setRT_A(System::String^ RT_A)
{
    this->RT_A = RT_A;
}

// Définition de la TVA de l'article
void NS_Comp_Map_Stock::CLMapStock::setTVA_A(System::String^ TVA_A)
{
    this->TVA_A = TVA_A;
}

// Définition de la description de l'article
void NS_Comp_Map_Stock::CLMapStock::setD_A(System::String^ D_A)
{
    this->D_A = D_A;
}

// Obtention de l'ID de l'article
System::String^ NS_Comp_Map_Stock::CLMapStock::getID_A(void)
{
    return this->ID_A;
}

// Obtention de la référence de l'article
System::String^ NS_Comp_Map_Stock::CLMapStock::getR_A(void)
{
    return this->R_A;
}

// Obtention du nom de l'article
System::String^ NS_Comp_Map_Stock::CLMapStock::getN_A(void)
{
    return this->N_A;
}

// Obtention de la quantité dans les paniers de l'article
System::String^ NS_Comp_Map_Stock::CLMapStock::getQS_A(void)
{
    return this->QS_A;
}

// Obtention du prix HT de l'article
System::String^ NS_Comp_Map_Stock::CLMapStock::getHT_A(void)
{
    return this->HT_A;
}

// Obtention du seuil de réapprovisionnement de l'article
System::String^ NS_Comp_Map_Stock::CLMapStock::getRT_A(void)
{
    return this->RT_A;
}

// Obtention de la TVA de l'article
System::String^ NS_Comp_Map_Stock::CLMapStock::getTVA_A(void)
{
    return this->TVA_A;
}

// Obtention de la description de l'article
System::String^ NS_Comp_Map_Stock::CLMapStock::getD_A(void)
{
    return this->D_A;
}
