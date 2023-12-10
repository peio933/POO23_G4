#include "CLCAD.h"

// Constructeur de la classe CLCAD
NS_Comp_Data::CLCAD::CLCAD(void)
{
    // Configuration de la chaîne de connexion à la base de données
    this->sCnx = "Data Source=TERMINATOR\\MSSQL_PEIO;Initial Catalog=POO_Groupe4;Integrated Security=True;Encrypt=False";

    // Initialisation des objets de connexion, commande, adaptateur et ensemble de données
    this->sSql = "Rien";
    this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
    this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
    this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
    this->oDs = gcnew System::Data::DataSet();

    // Configuration du type de commande
    this->oCmd->CommandType = System::Data::CommandType::Text;
}

// Méthode pour exécuter une requête SELECT et récupérer les données dans un ensemble de données
System::Data::DataSet^ NS_Comp_Data::CLCAD::getRows(System::String^ sSql, System::String^ sDataTableName)
{
    // Nettoie l'ensemble de données
    this->oDs->Clear();
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;

    try
    {
        // Exécute la commande SELECT et remplit l'ensemble de données avec les résultats
        this->oDA->SelectCommand = this->oCmd;
        this->oDA->Fill(this->oDs, sDataTableName);
    }
    catch (System::Exception^ ex)
    {
        // Gère les exceptions et imprime les détails
        System::Console::WriteLine("Erreur lors de l'exécution de la requête : " + ex->Message);
    }

    return this->oDs;
}

// Méthode pour exécuter une requête qui ne retourne pas de données (INSERT, UPDATE, DELETE)
void NS_Comp_Data::CLCAD::actionRows(System::String^ sSql)
{
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;

    // Ouvre la connexion, exécute la commande, puis ferme la connexion
    this->oCnx->Open();
    this->oCmd->ExecuteNonQuery();
    this->oCnx->Close();
}

// Méthode pour exécuter une requête SELECT et récupérer une valeur de chaîne unique
System::String^ NS_Comp_Data::CLCAD::executeQuery(System::String^ sSql)
{
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;

    // Ouvre la connexion, exécute la requête, récupère la première colonne de la première ligne, puis ferme la connexion
    this->oCnx->Open();
    System::Data::SqlClient::SqlDataReader^ reader = this->oCmd->ExecuteReader();
    System::String^ result = "";
    if (reader->Read()) {
        result = reader->GetString(0);
    }
    reader->Close();
    this->oCnx->Close();

    return result;
}

// Méthode pour exécuter une requête SELECT et récupérer une valeur entière
System::Int32 NS_Comp_Data::CLCAD::executeQueryForInt(System::String^ sSql)
{
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;

    // Ouvre la connexion, exécute la requête, récupère la première colonne de la première ligne, puis ferme la connexion
    this->oCnx->Open();
    System::Data::SqlClient::SqlDataReader^ reader = this->oCmd->ExecuteReader();
    System::Int32 result = 0;
    if (reader->Read()) {
        result = reader->GetInt32(0);
    }
    reader->Close();
    this->oCnx->Close();

    return result;
}

// Méthode pour exécuter une requête SELECT et récupérer une valeur décimale
System::Decimal NS_Comp_Data::CLCAD::executeQueryForDecimal(System::String^ sSql)
{
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;

    // Ouvre la connexion, exécute la requête, récupère la première colonne de la première ligne, puis ferme la connexion
    this->oCnx->Open();
    System::Data::SqlClient::SqlDataReader^ reader = this->oCmd->ExecuteReader();
    System::Decimal result = 0;
    if (reader->Read()) {
        result = reader->GetDecimal(0);
    }
    reader->Close();
    this->oCnx->Close();

    return result;
}
