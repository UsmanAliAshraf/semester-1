    #include<iostream>
    using namespace std;
     float perimeter(float);

    
    int main()
    {
        char letter;
        float num;
       
        cout<<"ENTER THE Shape(S FOR SQUARE, C FOR CIRCLE, T FOR TRIANGLE,H for Hexagon):";
        cin>> letter;

        cout<<"Enter The Value:";
        cin>>num;
        float answer= perimeter(num);
        cout<< perimeter(num);
        }

        float perimeter(float)
        {
            char letter;
            float num;
            float result;
        if(letter=='S' or 's')
        {
            result=4*num;
            return result;
        }

        if (letter=='C' or 'c')
        {
            result=6.28*num;
            return result;
        }
        if (letter='T' or 't')
        {
            result=3*num;
        }
        
        }