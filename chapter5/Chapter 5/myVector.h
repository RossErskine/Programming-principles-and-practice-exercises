#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

template <typename T>
class myVector
{
private:
	vector<T> myvector;
	vector<double> difference;
	int vectorSize = vector_size();
public:
	
	const T& vector_size(){
		vectorSize = myvector.size();
	}

	const T& getVecSize() const{
		return vectorSize;
	}

	const T& GetVector(int i) const{
		return myvector[i];
	}

	void add_vector(T vec){
		myvector.push_back(vec);
	}

	void display_vec(){
		sort(myvector.begin(), myvector.end());
		for (int i = 0; i < myvector.size(); i++){
			cout << myvector[i] << '\t';
		}
		cout << endl;
	}
	
	void DisplaySumOfVec(){
		cout << "The sum of all elements are: ";
		cout << accumulate(myvector.begin(), myvector.end(), 0) << endl;
	}

	void DisplaySumOfSumVec(double n){
		double sum = 0;
		for (int i = 0; i < n; ++i)
		{
			sum += myvector[i];
		}
		cout << "The sum of the first " << n << " elements are: " << sum << endl;
	}

	void DisplayVecDiff()
	{
		for (int i = 1; i != myvector.size(); ++i){
			difference.push_back(myvector[i] - myvector[i -1] );
		}
		for (int y = 0; y != myvector.size(); y++){
			cout << difference[y] << '\t';
		}
		cout << endl;

	}
	
	void DisplayMaxElement()
	{
		cout << "Max Elememnt: ";
		cout << *max_element(myvector.begin(), myvector.end()) << endl;
	}
	
	void DisplayMinElement()
	{
		cout << "Min Elememnt: ";
		cout << *min_element(myvector.begin(), myvector.end()) << endl;
	}
	
	void DisplayMean()
	{
		double sum = accumulate(myvector.begin(), myvector.end(), 0);
		double mean = sum / myvector.vec_size();
		cout << "Mean of Elements: " << mean << endl;
	}
};

