#include "Sales_Controller_Class.h"

Sales* Sales_Controller_Class::getStaffPointer(int targetID) {
	Sales* returningSale = nullptr;
	for (auto& transaction : salesList) {
		if (transaction.getSalesID() == targetID) {
			returningSale = &transaction;
			break;
		}
	}
	return returningSale;
}

void Sales_Controller_Class::addSale(int customerID, int staffID, string paymentType, date salesDate, double totalAmount, int speciesIDSold) {
	uniqueID++;
	Sales newSale(uniqueID, customerID, staffID, paymentType, salesDate, totalAmount, speciesIDSold);
	salesList.push_back(newSale);
}


void Sales_Controller_Class::removeSale(int targetID) {
	int currentIndex = 0;
	for (auto& current : salesList) {
		if(targetID == current.getSalesID()){}
		currentIndex++;
		nr
	}
}





vector<Sales> Sales_Controller_Class::getReport(date start, date end){
	vector<Sales> report;
	for (auto& transaction : salesList) {
		if (transaction.getSalesDate() >= start && transaction.getSalesDate() <= end) {
			report.push_back(transaction);
		}
	}
	return report;	
}

