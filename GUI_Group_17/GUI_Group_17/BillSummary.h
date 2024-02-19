#pragma once
using namespace System;

public ref class billSummary
{
     private:
		 String^ Service;
		 String^ Number;
		 String^ Amount;

     public:
		 void setData(String^ aService, String^ aNumber, String^ aAmount) {
			 Service = aService;
			 Number = aNumber;
			 Amount = aAmount;
		 }

		 String^ getService() {
			 return Service;
		 }
		 String^ getNumber() {
			 return Number;
		 }
		 String^ getAmount() {
			 return Amount;
		 }

};

