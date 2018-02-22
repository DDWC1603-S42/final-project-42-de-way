#include <iostream>
#include <windows.h>
using namespace std;

int AR,ARx,Exp,Expx,VGA,VGAx,VGG,VGGx,totalprice,choice5;
int ARp[]={2700,2000,2250,3000,3100};
int Expp[]={200,400,300};
int VGAp[]={6900,5000,7500};
int VGGp[]={3300,3000,5000};


int booting(){

	for (int x=0;x<101;x++){
		if (x<30){
			cout<<"Making sure You're not a Terrorist...("<<x+1<<"% Completed.)";
			system ("cls");
		}
		else if (x<60){
			cout<<"Seeing the goods inside You...("<<x+1<<"% Completed.)";
			system ("cls");
		}
		else if (x<100){
			cout<<"Authenticating...("<<x+1<<"% Completed.)";
			system("cls");
		}

	}
	cout<<"You're a Verified Human!(100% Completed.)";
	cout<<endl<<"Press ENTER to continue...";
	cin.ignore(1);
	system ("cls");
}


int CNT(){
	cout<<"_______________________________________"<<endl;
	cout<<"Alright, Next, Do you want to : "<<endl;
	cout<<"[1] Buy more Rifles."<<endl;
	cout<<"[2] Buy more Explosives."<<endl;
	cout<<"[3] Proceed to Checkout."<<endl;
	cout<<"_______________________________________"<<endl;
	cout<<"Choice :";
	cin>>choice5;
	
	    
	     }
	     
int CNT2(){
	cout<<"======================================="<<endl;
	cout<<"Well then , What do you want to do? "<<endl;
	cout<<"[1] Buy more Armor Sets."<<endl;
	cout<<"[2] Buy more VanGuns."<<endl;
	cout<<"[3] Proceed to Checkout."<<endl;
	cout<<"======================================="<<endl;
	cout<<"Choice :";
	cin>>choice5;
	
	    
	     }
	     
int Vanguarmor(){   cout<<endl;
	                string hello = "Defending's a Country means one thing , BECOMING A VANGUARD!'";
                    int e=0;
                    while ( hello[e] != '\0'){
	                cout << hello[e];
                	Sleep(20);
                  	e++;
	                }
	                cout<<endl<<endl<<"To become a Fully-Fledged Vanguard , You'll be needing a set of armor"<<endl;
	                cout<<"Choose one of these set of Armors:"<<endl;
	                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	                cout<<"[1]Genji Set           [$6900]  (Anti Armor-Piercing)"<<endl;
	                cout<<"[2]Assault Armor       [$5000]  (Perfect to Charge-in)"<<endl;
	                cout<<"[3]Maximillian Armor   [$7500]  (Ribbon - Effect )    "<<endl;
                   	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
            Try3:	cout<<"Chosen set:";
	                cin>>VGA;
	                cout<<endl<<"How many sets of it do you want? ";
	                cin>>VGAx;
	                          if (VGA==1){
			                        totalprice += VGAp[0]*VGAx;
			                        cout<<"You've picked "<<VGAx<<" Genji Set(s)."<<endl<<endl;
                                                    }
		                         	else if (VGA==2){
			                        totalprice += VGAp[1]*VGAx;
			                        cout<<"You've picked "<<VGAx<<" Assault Set(s)."<<endl<<endl;   
					                                }
			                        else if (VGA==3){
		                        	totalprice += VGAp[2]*VGAx;
		                        	cout<<"You've picked "<<VGAx<<" Maximillian Set (s)."<<endl<<endl;
			                                        }
			                  else {cout<<"Invalid Output bro , Try again"<<endl;
			                  goto Try3;
							   }
				}
	
int VanGun(){        cout<<endl<<endl;
                    string hello = "Now that you've got the best Armor , its time to get the 'VanGun'";
                    int z=0;
                    while ( hello[z] != '\0'){
	                cout << hello[z];
                 	Sleep(20);
	                z++;
                    }
                    cout<<endl<<"Freedom Requires Guns!"<<endl;
                    cout<<"Choose a Gun to use against those who oppose:"<<endl;
                    cout<<"[1] AUG         [$3300]   (Piercing Bullets!)"<<endl;
					cout<<"[2] SG553       [$2300]   (Richochets!)"<<endl;
					cout<<"[3] SCAR-20     [$5000]   (Semi-Automatic!)"<<endl<<endl;
				Try4:	cout<<"Desired VanGun :";
					cin>>VGG;
					cout<<endl<<"How much do you want?";
					cin>>VGGx;
					                if (VGG==1){
			               	        	totalprice += VGGp[0]*VGGx;
		                                cout<<"You've picked "<<VGGx<<" AUG(s)."<<endl;
									 }
									 
								    else if (VGG==2){
								    	totalprice += VGGp[1]*VGGx;
								    	cout<<"You've picked "<<VGGx<<" SG553(s)."<<endl;
									}
									
									else if (VGG==3){
										totalprice += VGGp[2]*VGGx;
										cout<<"You've picked "<<VGGx<<" SCAR-20(s)."<<endl;
									}
									else {cout<<"Invalid Output bro , Try again"<<endl;
			               	        goto Try4;
                                    }
        }
	     
int Explo(){        cout<<endl<<endl;
                    string hello = "Now that you've picked your desired gun , its time to get the Explosives";
                    int z=0;
                    while ( hello[z] != '\0'){
	                cout << hello[z];
                 	Sleep(20);
	                z++;
                    }
                    cout<<endl<<"It wouldn't be a WAR if there's no Explosions RIGHT?!"<<endl;
                    cout<<"Pick your Favorite Explosive:"<<endl;
                    cout<<"[1] FlashBang     [$200]   (Lights up the Sky!)"<<endl;
					cout<<"[2] Molotov       [$400]   (Lights up the Earth!)"<<endl;
					cout<<"[3] Hand-Grenade  [$300]   (Destroys the Earth & Sky!)"<<endl<<endl;
				Try2:	cout<<"Desired Explosive :";
					cin>>Exp;
					cout<<endl<<"How much do you want?";
					cin>>Expx;
					                if (Exp==1){
			               	        	totalprice += 200*Expx;
		                                cout<<"You've picked "<<Expx<<" Flashbang(s)."<<endl;
									 }
									 
								    else if (Exp==2){
								    	totalprice += 400*Expx;
								    	cout<<"You've picked "<<Expx<<" Molotov(s)."<<endl;
									}
									
									else if (Exp==3){
										totalprice += 300*Expx;
										cout<<"You've picked "<<Expx<<" Hand-Grenade(s)."<<endl;
									}
									else {cout<<"Invalid Output bro , Try again"<<endl;
			               	        goto Try2;
                                    }
        }
           
int ARifle(){
	                system("Cls");
	                cout<<"------------------------------------"<<endl;
	             	string hello = "START A WAR? YOU'VE GOT GUTS DUDE!";
                    int y=0;
                    while ( hello[y] != '\0'){
	                cout << hello[y];
                 	Sleep(20);
	                y++;
                    } 
	             	cout<<endl<<"------------------------------------"<<endl;
	             	cout<<"Lets start off by getting you the perfect Assault Rifle"<<endl;
	             	cout<<"Pick your desired 'rifle' :^)"<<endl<<endl;
		            cout<<"[1] AK-47         [$2700] (Close-Quarter-Combat)"<<endl;
					cout<<"[2] Galil AR      [$2000] (Spray-and-Pray)"<<endl;
					cout<<"[3] FAMAS         [$2250] (Burst-Fire)"<<endl;
					cout<<"[4] M4A4          [$3000] (Wrecking Havoc)"<<endl;
					cout<<"[5] M4A1-S        [$3100] (The Silent-The Better)"<<endl;
			Try1:	cout<<"Desired Gun :";
				    cin>>AR;
				    cout<<endl<<"And how many do you want?";
				    cin>>ARx;
				            if (AR==1){
			               	totalprice += ARp[0]*ARx;
			               	cout<<"You've picked "<<ARx<<" AK-47(s)."<<endl<<endl;
                                      }
					        else if (AR==2){
			               	totalprice += ARp[1]*ARx;
			               	cout<<"You've picked "<<ARx<<" Galil AR(s)."<<endl<<endl;   
						                   }
					        else if (AR==3){
			               	totalprice += ARp[2]*ARx;
			               	cout<<"You've picked "<<ARx<<" FAMAS(es)."<<endl<<endl;
			               	               }
			                else if (AR==4){
			               	totalprice += ARp[3]*ARx;
			               	cout<<"You've picked "<<ARx<<" M4A4(s)."<<endl<<endl;
			               	               }
			                else if (AR==5){
			               	totalprice += ARp[4]*ARx;
			               	cout<<"You've picked "<<ARx<<" M4A1-S(s)."<<endl<<endl;
			               	               }
			               	else {cout<<"Invalid Output bro , Try again"<<endl;
			               	goto Try1;
							   }
			}
           
           
int main(){
	int *FinalPrice;
    FinalPrice = &totalprice;
	int choice1,choice2,choice3,choice4;
	
	booting();
    
    cout<<"********************************************"<<endl;
    cout<<"*                                          *"<<endl;
    cout<<"*         Welcome to MnS Guns  /(^_^)/     *"<<endl;
    cout<<"*             -est. since'99-              *"<<endl;
    cout<<"*                                          *"<<endl;
    cout<<"*       What brings you to this place?     *"<<endl;
    cout<<"*       [1] Start a war.                   *"<<endl;
    cout<<"*       [2] Defend a country.              *"<<endl;
    cout<<"*       [3] Just to get out.               *"<<endl;
    cout<<"*                                          *"<<endl;
    cout<<"********************************************"<<endl;
    
    
    string hello = "Whaddya wanna start? Ans:-";
    int x=0;
    while ( hello[x] != '\0'){
	cout << hello[x];
	Sleep(20);
	x++;
    } 
    cin>>choice1;
    
    if (choice1==1){
    	do{
    		Situ:ARifle();
            Sini:Explo();
			
			CNT();
    		if (choice5==1){
	    	goto Situ;
		}
		else if (choice5==2){
			goto Sini;
		}
		else if (choice5==3){
			goto Sana;
		}
		else {
			cout<<"Invalid Input";
			return 0;
		}
    		
		}while ((choice5==1)||(choice5==2));
        Sana:cout<<endl<<endl<<"All Your Orders have been taken."<<endl<<"The Amount you need to pay is $"<<*FinalPrice<<" ."<<endl;
        string hello = "Please proceed to our counter to pick up to get them FirePowerS! Come Again~!";
        int a=0;
        while ( hello[a] != '\0'){
	    cout << hello[a];
	    Sleep(20);
	    a++;
        } 
       }
       
       else if (choice1==2){
       	do{
       		KatSitu:Vanguarmor();
       		KatSini:VanGun();
       		CNT2();
    		if (choice5==1){
	    	goto KatSitu;
		}
		else if (choice5==2){
			goto KatSini;
		}
		else if (choice5==3){
			goto KatSana;
		}
		else {
			cout<<"Invalid Input";
			return 0;
		   }while ((choice5==1)||(choice5==2));
		   KatSana:cout<<endl<<endl<<"All Your Orders have been taken."<<endl<<"The Amount you need to pay is $"<<*FinalPrice<<" ."<<endl;
        string hello = "Please proceed to our counter to pick up to get them FirePowerS! Come Again~!";
        int i=0;
        while ( hello[i] != '\0'){
	    cout << hello[i];
	    Sleep(20);
	    i++;
        }
       	
	   }while((choice5==1)||(choice5==2));
	}
	
    else{string hello = "You can Leave now.";
        int o=0;
        while ( hello[o] != '\0'){
	    cout << hello[o];
	    Sleep(20);
	    o++;
    	
	}

}
}
