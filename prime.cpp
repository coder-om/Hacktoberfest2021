//Sieve of Eratosthenes
const int MXP = 1000'005;
vector<int> prime;
void getPrime()
{
    bitset<MXP> isprime(0);
    isprime[0] = isprime[1] = 1;
    for (int i = 2; i * i <= MXP; i++)
    {
        if (isprime[i] == 0)
        {
            for (int j = i * i; j <= MXP; j += i)
            {
                isprime[j] = 1;
            }
        }
    }

    prime.push_back(2);
    for(int i=3; i<MXP; i+=2)
        if(!isprime[i])
            prime.pb(i);
}
