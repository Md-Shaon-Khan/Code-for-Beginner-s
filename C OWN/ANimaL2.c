#include<stdio.h>
int main()
{

    char Kingdom[20];
    char Phyla[20];
    char SubPhyla[20];
    char SubUro[20];
    char SubVer[20];
    char SupClass[20];

    printf("Enter the KINGDOM :");
    gets(Kingdom);
    printf("%s",Kingdom);
    if(strcmp(Kingdom,"ANIMALIA")==0)
    {
        printf("\n\nPorifera\nCnidaria\nPlatyhelminthes\nNematoda\nMollusca\nAnnelida\nArthropoda\nEchinodermata\nChordata.\n\n");

        printf("Enter any Phyla :");
        gets(Phyla);

        if(strcmp(Phyla,"Porifera")==0)
        {
            printf("______Scypha gelatinaosum\n______Cliona celata\n______Spongilla lacustris\n______Euspongia officinalis.\n\n");

        }
        else if(strcmp(Phyla,"Cnidaria")==0)
        {
            printf("______Aurelia aurita\n______Tubularia rosa\n______Porpita porpita\n______Gorgonia ventalina\n______Physalia physalis\n______Cerianthus filiformis\n______Pennatula sulcata.\n\n");
        }

        else if(strcmp(Phyla,"Platyhelminthes")==0)
        {
            printf("______Schistosoma mansomi\n______Bipalium kewense\n______Fasciola hepatica\n______Gyrodactylus corti\n______Taenia solium.\n\n");
        }

        else if(strcmp(Phyla,"Nematoda")==0)
        {
            printf("______Loa loa\n______Ascaris lumbricoides\n______Trichinella spiralis\n______Wuchereria bancrofti.\n\n");
        }
        else if(strcmp(Phyla,"Mollusca")==0)
        {
            printf("______Uroteuthis duvauceli\n______Lamellidens marginalis\n______Pinctada vulgaris\n______Pila globosa\n______Octopus vulgaris.\n\n");
        }
        else if(strcmp(Phyla,"Annelida")==0)
        {
            printf("______Metaphire posthuma\n______Arenicola marina\n______Amphitrite ornata\n______Pontopdella muricata\n______Tubifex tubifex\n______Hirudinaria medicinalis.\n\n");
        }
        else if(strcmp(Phyla,"Arthropoda")==0)
        {
            printf("______Limulus polyphemus\n______Carcinus manius\n______Musca domestica\n______Culex pipiens\n______Pieris brassicae\n______Periplaneta americana\n______Scolopendra gigantea\n______Lycosa lenta.\n\n");
        }
        else if(strcmp(Phyla,"Echinodermata")==0)
        {
            printf("______Antedon bifida\n______Ophiothrix fragilis\n______Astropecten euryacanthus\n______Crossaster papposus\n______Cucumaria planci\n______Echinus esculentus\n______Gorgonocephalus arcticus\n______Clypeaster rosaceus.\n\n");
        }
        else if(strcmp(Phyla,"Chordata")==0)
        {
            printf("\n-Urochordata\n-Cephalochordata\n-Vertebrata\n\n");
            printf("Enter the sub phylam :");
            gets(SubPhyla);
            if(strcmp(SubPhyla,"Urochordata")==0)
            {
                printf("\n---Ascidiacea\n---Thaliacea\n---Larvacea\n\n");
                printf("Enter the class :");
                gets(SubUro);
                if(strcmp(SubUro,"Ascidiacea")==0)
                {
                    printf("______Ascidia mentula\n______Molgula tubifera.\n\n");
                }
                else if(strcmp(SubUro,"Thaliacea")==0)
                {
                    printf("______Salpa maxima\n______Doliolum rarum.\n\n");
                }
                else if(strcmp(SubUro,"Larvacea")==0)
                {
                    printf("______Oikopleura dioica\n______Appendicularia.\n\n");
                }
            }
            else if(strcmp(SubPhyla,"Cephalochordata")==0)
            {
                printf("______Branchiostoma lanceolatum.\n\n");
            }
            else if(strcmp(SubPhyla,"Vertebrata")==0)
            {
                printf("___Cyclostomata\n___Gnathostomata.\n\n");
                printf("Enter super class :");
                gets(SubVer);
                if(strcmp(SubVer,"Cyclostomata")==0)
                {
                    printf("\n___Myxini\n___Petromyzontida.\n\n");
                    printf("Enter the class 1 or 2 :");
                    gets(SupClass);
                    if(strcmp(SupClass,"Myxini")==0)
                    {
                        printf("______Myxine glutinosa.\n\n");

                    }
                    else if(strcmp(SupClass,"Petromyzontida")==0)
                    {
                        printf("______Petromyzon marinus.\n\n");
                    }
                }
                else if(strcmp(SubVer,"Gnathostomata")==0)
                {
                    printf("____Chondrichthyes\n____Actinopterygii\n____Sarcopterygii\n____Amphibia\n____Reptilia\n____Aves\n____Mammalia.\n\n");
                    printf("Enter the class 1 to 7 :");
                    gets(SupClass);
                    if(strcmp(SupClass,"Chondrichthyes")==0)
                    {
                        printf("______Plesiobatis daviesi\n______Scoliodon laticaudus\n______Eusphyrna blochii.\n\n");
                    }
                    else if(strcmp(SupClass,"Actinopterygii")==0)
                    {
                        printf("______Tenualosa ilisha\n______Anabas testudineus\n______Channa punctatus.\n\n");
                    }
                    else if(strcmp(SupClass,"Sarcopterygii")==0)
                    {
                        printf("______Latimeria chalumnae\n______Neoceratodus forsteri.\n\n");
                    }
                    else if(strcmp(SupClass,"Amphibia")==0)
                    {
                        printf("______Salamandra salamandra\n______Rhacophorous fergusonil\n______Hoplobatrachus tigerinus.\n\n");
                    }
                    else if(strcmp(SupClass,"Reptilia")==0)
                    {
                        printf("______Gavialis gangeticus\n______Lissemys punctata\n______Naja naja.\n\n");
                    }
                    else if(strcmp(SupClass,"Aves")==0)
                    {
                        printf("______Corvus splendens\n______Columba livia\n______Copsychus saularis\n______Passer domesticus.\n\n");
                    }
                    else if(strcmp(SupClass,"Mammalia")==0)
                    {
                        printf("______Ornithorhynchus anatinus\n______Macropus rufa\n______Pteropus gigantius\n______Balaenoptera musculus\n______Panthera leo\n______Panthera tigris\n______Dicerorhinus sumatrensis\n______Homo sapiens.\n\n");
                    }


                }



            }



        }









    }



    getch();
}
