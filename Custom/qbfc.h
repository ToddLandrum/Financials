

*--- Constant Group: ENOpenMode
#DEFINE omSingleUser	0	
#DEFINE omMultiUser	1	
#DEFINE omDontCare	2	

*--- Constant Group: ENRqOnError
#DEFINE roeStop	0	
#DEFINE roeContinue	1	
#DEFINE roeRollback	2	

*--- Constant Group: ENReleaseLevel
#DEFINE rlPreAlpha	0	
#DEFINE rlAlpha	1	
#DEFINE rlBeta	2	
#DEFINE rlRelease	3	

*--- Constant Group: ENRqResponseData
#DEFINE rdIncludeAll	0	
#DEFINE rdIncludeNone	1	

*--- Constant Group: ENConnectionType
#DEFINE ctUnknown	0	
#DEFINE ctLocalQBD	1	
#DEFINE ctRemoteQBD	2	
#DEFINE ctLocalQBDLaunchUI	3	
#DEFINE ctRemoteQBOE	4	

*--- Constant Group: ENUnattendedModePrefType
#DEFINE umptRequired	1	
#DEFINE umptOptional	2	

*--- Constant Group: ENPersonalDataPrefType
#DEFINE pdptRequired	1	
#DEFINE pdptOptional	2	
#DEFINE pdptNotNeeded	3	

*--- Constant Group: ENQuickBooksEdition
#DEFINE qbeUS	0	
#DEFINE qbeOE	1	
#DEFINE qbeCA	2	
#DEFINE qbeUK	3	
#DEFINE qbeAU	4	

*--- Constant Group: ENORNameFilter
#DEFINE ornfNA	-1	
#DEFINE ornfNameFilter	0	
#DEFINE ornfNameRangeFilter	1	

*--- Constant Group: ENORCurrencyFilter
#DEFINE orcfNA	-1	
#DEFINE orcfListID	0	
#DEFINE orcfFullName	1	

*--- Constant Group: ENActiveStatus
#DEFINE asActiveOnly	0	
#DEFINE asInactiveOnly	1	
#DEFINE asAll	2	

*--- Constant Group: ENAccountType
#DEFINE atAccountsPayable	0	
#DEFINE atAccountsReceivable	1	
#DEFINE atBank	2	
#DEFINE atCostOfGoodsSold	3	
#DEFINE atCreditCard	4	
#DEFINE atEquity	5	
#DEFINE atExpense	6	
#DEFINE atFixedAsset	7	
#DEFINE atIncome	8	
#DEFINE atLongTermLiability	9	
#DEFINE atNonPosting	10	
#DEFINE atOtherAsset	11	
#DEFINE atOtherCurrentAsset	12	
#DEFINE atOtherCurrentLiability	13	
#DEFINE atOtherExpense	14	
#DEFINE atOtherIncome	15	

*--- Constant Group: ENORAccountListQuery
#DEFINE oralqNA	-1	
#DEFINE oralqListID	0	
#DEFINE oralqFullName	1	
#DEFINE oralqAccountListFilter	2	

*--- Constant Group: ENmetaData
#DEFINE mdNoMetaData	0	
#DEFINE mdMetaDataOnly	1	
#DEFINE mdMetaDataAndResponseData	2	

*--- Constant Group: ENORClassFilter
#DEFINE orclfNA	-1	
#DEFINE orclfListID	0	
#DEFINE orclfFullName	1	
#DEFINE orclfListIDWithChildren	2	
#DEFINE orclfFullNameWithChildren	3	

*--- Constant Group: ENORCustomerListQuery
#DEFINE orclqNA	-1	
#DEFINE orclqListID	0	
#DEFINE orclqFullName	1	
#DEFINE orclqCustomerListFilter	2	

*--- Constant Group: ENiterator
#DEFINE itStart	0	
#DEFINE itContinue	1	
#DEFINE itStop	2	

*--- Constant Group: ENOREarnings
#DEFINE oreNA	-1	
#DEFINE oreClearEarnings	0	
#DEFINE oreEarnings	1	

*--- Constant Group: ENORRate
#DEFINE orrNA	-1	
#DEFINE orrRate	0	
#DEFINE orrRatePercent	1	

*--- Constant Group: ENORListQuery
#DEFINE orlqNA	-1	
#DEFINE orlqListID	0	
#DEFINE orlqFullName	1	
#DEFINE orlqListFilter	2	

*--- Constant Group: ENORVendorListQuery
#DEFINE orvlqNA	-1	
#DEFINE orvlqListID	0	
#DEFINE orvlqFullName	1	
#DEFINE orvlqVendorListFilter	2	

*--- Constant Group: ENPaymentMethodType
#DEFINE pmtAmericanExpress	0	
#DEFINE pmtCash	1	
#DEFINE pmtCheck	2	
#DEFINE pmtDebitCard	3	
#DEFINE pmtDiscover	4	
#DEFINE pmtECheck	5	
#DEFINE pmtGiftCard	6	
#DEFINE pmtMasterCard	7	
#DEFINE pmtOther	8	
#DEFINE pmtOtherCreditCard	9	
#DEFINE pmtVisa	10	

*--- Constant Group: ENORPaymentMethodListQuery
#DEFINE orpmlqNA	-1	
#DEFINE orpmlqListID	0	
#DEFINE orpmlqFullName	1	
#DEFINE orpmlqPaymentMethodListFilter	2	

*--- Constant Group: ENDoneStatus
#DEFINE dsNotDoneOnly	0	
#DEFINE dsDoneOnly	1	
#DEFINE dsAll	2	

*--- Constant Group: ENORToDoListQuery
#DEFINE ortdlqNA	-1	
#DEFINE ortdlqListID	0	
#DEFINE ortdlqToDoListFilter	1	

*--- Constant Group: ENORSalesPurchase
#DEFINE orspNA	-1	
#DEFINE orspSalesOrPurchase	0	
#DEFINE orspSalesAndPurchase	1	

*--- Constant Group: ENORPrice
#DEFINE orpNA	-1	
#DEFINE orpPrice	0	
#DEFINE orpPricePercent	1	

*--- Constant Group: ENORSalesPurchaseMod
#DEFINE orspmNA	-1	
#DEFINE orspmSalesOrPurchaseMod	0	
#DEFINE orspmSalesAndPurchaseMod	1	

*--- Constant Group: ENORListQueryWithOwnerIDAndClass
#DEFINE orlqwoidacNA	-1	
#DEFINE orlqwoidacListID	0	
#DEFINE orlqwoidacFullName	1	
#DEFINE orlqwoidacListWithClassFilter	2	

*--- Constant Group: ENORItemInventoryAssemblyLine
#DEFINE oriialNA	-1	
#DEFINE oriialClearItemsInGroup	0	
#DEFINE oriialItemInventoryAssemblyLine	1	

*--- Constant Group: ENORDiscountRate
#DEFINE ordrNA	-1	
#DEFINE ordrDiscountRate	0	
#DEFINE ordrDiscountRatePercent	1	

*--- Constant Group: ENORItemGroupLine
#DEFINE origlNA	-1	
#DEFINE origlClearItemsInGroup	0	
#DEFINE origlItemGroupLine	1	

*--- Constant Group: ENORPriceLevel
#DEFINE orplNA	-1	
#DEFINE orplPriceLevelFixedPercentage	0	
#DEFINE orplPriceLevelPerItemCurrency	1	

*--- Constant Group: ENAdjustRelativeTo
#DEFINE artStandardPrice	0	
#DEFINE artCost	1	
#DEFINE artCurrentCustomPrice	2	

*--- Constant Group: ENORPriceLevelPrice
#DEFINE orplpNA	-1	
#DEFINE orplpORCustomPrice	0	
#DEFINE orplpPriceLevelAdjustment	1	

*--- Constant Group: ENORORCustomPrice
#DEFINE ororcpNA	-1	
#DEFINE ororcpCustomPrice	0	
#DEFINE ororcpCustomPricePercent	1	

*--- Constant Group: ENORPriceLevelQuery
#DEFINE orplqNA	-1	
#DEFINE orplqListID	0	
#DEFINE orplqFullName	1	
#DEFINE orplqPriceLevelFilter	2	

*--- Constant Group: ENORBillingRate
#DEFINE orbrNA	-1	
#DEFINE orbrFixedBillingRate	0	
#DEFINE orbrBillingRatePerItem	1	

*--- Constant Group: ENAdjustBillingRateRelativeTo
#DEFINE abrrtStandardRate	0	
#DEFINE abrrtCurrentCustomRate	1	

*--- Constant Group: ENORBillingRateItem
#DEFINE orbriNA	-1	
#DEFINE orbriORCustomRate	0	
#DEFINE orbriBillingRateAdjustment	1	

*--- Constant Group: ENORORCustomRate
#DEFINE ororcrNA	-1	
#DEFINE ororcrCustomRate	0	
#DEFINE ororcrCustomRatePercent	1	

*--- Constant Group: ENORBillingRateQuery
#DEFINE orbrqNA	-1	
#DEFINE orbrqListID	0	
#DEFINE orbrqFullName	1	
#DEFINE orbrqBillingRateFilter	2	

*--- Constant Group: ENORWorkersCompCodeQuery
#DEFINE orwccqNA	-1	
#DEFINE orwccqListID	0	
#DEFINE orwccqFullName	1	
#DEFINE orwccqWorkersCompCodeFilter	2	

*--- Constant Group: ENMappingCategory
#DEFINE mcBOX1	0	
#DEFINE mcBOX2	1	
#DEFINE mcBOX3	2	
#DEFINE mcBOX4	3	
#DEFINE mcBOX5	4	
#DEFINE mcBOX6	5	
#DEFINE mcBOX7	6	
#DEFINE mcBOX8	7	
#DEFINE mcBOX9	8	
#DEFINE mcBOX10	9	
#DEFINE mcBOX13	10	
#DEFINE mcBOX14	11	

*--- Constant Group: ENORInventorySiteQuery
#DEFINE orisqNA	-1	
#DEFINE orisqListID	0	
#DEFINE orisqFullName	1	
#DEFINE orisqInventorySiteFilter	2	

*--- Constant Group: ENORInvoiceLineAdd
#DEFINE orila1NA	-1	
#DEFINE orilaInvoiceLineAdd	0	
#DEFINE orilaInvoiceLineGroupAdd	1	

*--- Constant Group: ENORSerialLotNumber
#DEFINE orslnNA	-1	
#DEFINE orslnSerialNumber	0	
#DEFINE orslnLotNumber	1	

*--- Constant Group: ENORRatePriceLevel
#DEFINE orrplNA	-1	
#DEFINE orrplRate	0	
#DEFINE orrplRatePercent	1	
#DEFINE orrplPriceLevelRef	2	

*--- Constant Group: ENORDiscountLineAdd
#DEFINE ordlaNA	-1	
#DEFINE ordlaAmount	0	
#DEFINE ordlaRatePercent	1	

*--- Constant Group: ENORSalesTaxLineAdd
#DEFINE orstlaNA	-1	
#DEFINE orstlaAmount	0	
#DEFINE orstlaRatePercent	1	

*--- Constant Group: ENORInvoiceLineMod
#DEFINE orilmNA	-1	
#DEFINE orilmInvoiceLineMod	0	
#DEFINE orilmInvoiceLineGroupMod	1	

*--- Constant Group: ENDateMacro
#DEFINE dmAll	0	
#DEFINE dmToday	1	
#DEFINE dmThisWeek	2	
#DEFINE dmThisWeekToDate	3	
#DEFINE dmThisMonth	4	
#DEFINE dmThisMonthToDate	5	
#DEFINE dmThisCalendarQuarter	6	
#DEFINE dmThisCalendarQuarterToDate	7	
#DEFINE dmThisFiscalQuarter	8	
#DEFINE dmThisFiscalQuarterToDate	9	
#DEFINE dmThisCalendarYear	10	
#DEFINE dmThisCalendarYearToDate	11	
#DEFINE dmThisFiscalYear	12	
#DEFINE dmThisFiscalYearToDate	13	
#DEFINE dmYesterday	14	
#DEFINE dmLastWeek	15	
#DEFINE dmLastWeekToDate	16	
#DEFINE dmLastMonth	17	
#DEFINE dmLastMonthToDate	18	
#DEFINE dmLastCalendarQuarter	19	
#DEFINE dmLastCalendarQuarterToDate	20	
#DEFINE dmLastFiscalQuarter	21	
#DEFINE dmLastFiscalQuarterToDate	22	
#DEFINE dmLastCalendarYear	23	
#DEFINE dmLastCalendarYearToDate	24	
#DEFINE dmLastFiscalYear	25	
#DEFINE dmLastFiscalYearToDate	26	
#DEFINE dmNextWeek	27	
#DEFINE dmNextFourWeeks	28	
#DEFINE dmNextMonth	29	
#DEFINE dmNextCalendarQuarter	30	
#DEFINE dmNextCalendarYear	31	
#DEFINE dmNextFiscalQuarter	32	
#DEFINE dmNextFiscalYear	33	

*--- Constant Group: ENORTxnDateRangeFilter
#DEFINE ortdrfNA	-1	
#DEFINE ortdrfTxnDateFilter	0	
#DEFINE ortdrfDateMacro	1	

*--- Constant Group: ENOREntityFilter
#DEFINE orefNA	-1	
#DEFINE orefListID	0	
#DEFINE orefFullName	1	
#DEFINE orefListIDWithChildren	2	
#DEFINE orefFullNameWithChildren	3	

*--- Constant Group: ENORAccountFilter
#DEFINE orafNA	-1	
#DEFINE orafListID	0	
#DEFINE orafFullName	1	
#DEFINE orafListIDWithChildren	2	
#DEFINE orafFullNameWithChildren	3	

*--- Constant Group: ENORDateRangeFilter
#DEFINE ordrfNA	-1	
#DEFINE ordrfModifiedDateRangeFilter	0	
#DEFINE ordrfTxnDateRangeFilter	1	

*--- Constant Group: ENORRefNumberFilter
#DEFINE orrnfNA	-1	
#DEFINE orrnfRefNumberFilter	0	
#DEFINE orrnfRefNumberRangeFilter	1	

*--- Constant Group: ENPaidStatus
#DEFINE psAll	0	
#DEFINE psPaidOnly	1	
#DEFINE psNotPaidOnly	2	

*--- Constant Group: ENORInvoiceQuery
#DEFINE oriqNA	-1	
#DEFINE oriqTxnID	0	
#DEFINE oriqRefNumber	1	
#DEFINE oriqRefNumberCaseSensitive	2	
#DEFINE oriqInvoiceFilter	3	

*--- Constant Group: ENOREstimateLineAdd
#DEFINE orelaNA	-1	
#DEFINE orelaEstimateLineAdd	0	
#DEFINE orelaEstimateLineGroupAdd	1	

*--- Constant Group: ENORMarkupRatePriceLevel
#DEFINE ormrplNA	-1	
#DEFINE ormrplMarkupRate	0	
#DEFINE ormrplMarkupRatePercent	1	
#DEFINE ormrplPriceLevelRef	2	

*--- Constant Group: ENOREstimateLineMod
#DEFINE orelmNA	-1	
#DEFINE orelmEstimateLineMod	0	
#DEFINE orelmEstimateLineGroupMod	1	

*--- Constant Group: ENORTxnQuery
#DEFINE ortqNA	-1	
#DEFINE ortqTxnID	0	
#DEFINE ortqRefNumber	1	
#DEFINE ortqRefNumberCaseSensitive	2	
#DEFINE ortqTxnFilter	3	

*--- Constant Group: ENORSalesOrderLineAdd
#DEFINE orsolaNA	-1	
#DEFINE orsolaSalesOrderLineAdd	0	
#DEFINE orsolaSalesOrderLineGroupAdd	1	

*--- Constant Group: ENORSalesOrderLineMod
#DEFINE orsolmNA	-1	
#DEFINE orsolmSalesOrderLineMod	0	
#DEFINE orsolmSalesOrderLineGroupMod	1	

*--- Constant Group: ENORTxnNoAccountQuery
#DEFINE ortnaqNA	-1	
#DEFINE ortnaqTxnID	0	
#DEFINE ortnaqRefNumber	1	
#DEFINE ortnaqRefNumberCaseSensitive	2	
#DEFINE ortnaqTxnFilterNoAccount	3	

*--- Constant Group: ENORSalesReceiptLineAdd
#DEFINE orsrlaNA	-1	
#DEFINE orsrlaSalesReceiptLineAdd	0	
#DEFINE orsrlaSalesReceiptLineGroupAdd	1	

*--- Constant Group: ENORSalesReceiptLineMod
#DEFINE orsrlmNA	-1	
#DEFINE orsrlmSalesReceiptLineMod	0	
#DEFINE orsrlmSalesReceiptLineGroupMod	1	

*--- Constant Group: ENORCreditMemoLineAdd
#DEFINE orcmlaNA	-1	
#DEFINE orcmlaCreditMemoLineAdd	0	
#DEFINE orcmlaCreditMemoLineGroupAdd	1	

*--- Constant Group: ENORCreditMemoLineMod
#DEFINE orcmlmNA	-1	
#DEFINE orcmlmCreditMemoLineMod	0	
#DEFINE orcmlmCreditMemoLineGroupMod	1	

*--- Constant Group: ENORApplyPayment
#DEFINE orapNA	-1	
#DEFINE orapIsAutoApply	0	
#DEFINE orapAppliedToTxnAdd	1	

*--- Constant Group: ENORChargeTxnQuery
#DEFINE orctqNA	-1	
#DEFINE orctqTxnID	0	
#DEFINE orctqRefNumber	1	
#DEFINE orctqRefNumberCaseSensitive	2	
#DEFINE orctqChargeFilter	3	

*--- Constant Group: ENORInventorySiteORShipToEntity
#DEFINE orisorsteNA	-1	
#DEFINE orisorsteInventorySiteRef	0	
#DEFINE orisorsteShipToEntityRef	1	

*--- Constant Group: ENORPurchaseOrderLineAdd
#DEFINE orpolaNA	-1	
#DEFINE orpolaPurchaseOrderLineAdd	0	
#DEFINE orpolaPurchaseOrderLineGroupAdd	1	

*--- Constant Group: ENORPurchaseOrderLineMod
#DEFINE orpolmNA	-1	
#DEFINE orpolmPurchaseOrderLineMod	0	
#DEFINE orpolmPurchaseOrderLineGroupMod	1	

*--- Constant Group: ENORItemLineAdd
#DEFINE orilaNA	-1	
#DEFINE orilaItemLineAdd	0	
#DEFINE orilaItemGroupLineAdd	1	

*--- Constant Group: ENORItemLineMod
#DEFINE orilmmNA	-1	
#DEFINE orilmmItemLineMod	0	
#DEFINE orilmmItemGroupLineMod	1	

*--- Constant Group: ENORBillQuery
#DEFINE orbqNA	-1	
#DEFINE orbqTxnID	0	
#DEFINE orbqRefNumber	1	
#DEFINE orbqRefNumberCaseSensitive	2	
#DEFINE orbqBillFilter	3	

*--- Constant Group: ENORCheckPrint
#DEFINE orcpNA	-1	
#DEFINE orcpIsToBePrinted	0	
#DEFINE orcpRefNumber	1	

*--- Constant Group: ENORItemFilter
#DEFINE orifNA	-1	
#DEFINE orifListID	0	
#DEFINE orifFullName	1	
#DEFINE orifListIDWithChildren	2	
#DEFINE orifFullNameWithChildren	3	

*--- Constant Group: ENORSalesTaxPaymentCheckQuery
#DEFINE orstpcqNA	-1	
#DEFINE orstpcqTxnID	0	
#DEFINE orstpcqRefNumber	1	
#DEFINE orstpcqRefNumberCaseSensitive	2	
#DEFINE orstpcqTxnFilterWithItemFilter	3	

*--- Constant Group: ENORTypeAdjustment
#DEFINE ortaNA	-1	
#DEFINE ortaQuantityAdjustment	0	
#DEFINE ortaValueAdjustment	1	
#DEFINE ortaSerialNumberAdjustment	2	
#DEFINE ortaLotNumberAdjustment	3	

*--- Constant Group: ENORQuantityAdjustment
#DEFINE orqaNA	-1	
#DEFINE orqaNewQuantity	0	
#DEFINE orqaQuantityDifference	1	

*--- Constant Group: ENORValueAdjustment
#DEFINE orvaNA	-1	
#DEFINE orvaNewValue	0	
#DEFINE orvaValueDifference	1	

*--- Constant Group: ENORSerialNumberAdjustment
#DEFINE orsnaNA	-1	
#DEFINE orsnaAddSerialNumber	0	
#DEFINE orsnaRemoveSerialNumber	1	

*--- Constant Group: ENORTypeAdjustmentMod
#DEFINE ortamNA	-1	
#DEFINE ortamSerialNumber	0	
#DEFINE ortamLotAdjustment	1	

*--- Constant Group: ENORInventoryAdjustmentQuery
#DEFINE oriaqNA	-1	
#DEFINE oriaqTxnID	0	
#DEFINE oriaqRefNumber	1	
#DEFINE oriaqRefNumberCaseSensitive	2	
#DEFINE oriaqTxnFilterWithItemFilter	3	

*--- Constant Group: ENORTimeTrackingEntityFilter
#DEFINE orttefNA	-1	
#DEFINE orttefListID	0	
#DEFINE orttefFullName	1	

*--- Constant Group: ENORTimeTrackingTxnQuery
#DEFINE ortttqNA	-1	
#DEFINE ortttqTxnID	0	
#DEFINE ortttqTimeTrackingTxnFilter	1	

*--- Constant Group: ENORHomeCurrencyAdjustment
#DEFINE orhcaNA	-1	
#DEFINE orhcaIsHomeCurrencyAdjustment	0	
#DEFINE orhcaCurrencyExchangeRate	1	

*--- Constant Group: ENORJournalLine
#DEFINE orjlNA	-1	
#DEFINE orjlJournalDebitLine	0	
#DEFINE orjlJournalCreditLine	1	

*--- Constant Group: ENORDepositLineAdd
#DEFINE ordladdNA	-1	
#DEFINE ordladdPaymentLine	0	
#DEFINE ordladdDepositInfo	1	

*--- Constant Group: ENORDepositLineMod
#DEFINE ordlmNA	-1	
#DEFINE ordlmPaymentLine	0	
#DEFINE ordlmDepositInfoMod	1	

*--- Constant Group: ENORDepositQuery
#DEFINE ordqNA	-1	
#DEFINE ordqTxnID	0	
#DEFINE ordqDepositFilter	1	

*--- Constant Group: ENListDelType
#DEFINE ldtAccount	0	
#DEFINE ldtBillingRate	1	
#DEFINE ldtClass	2	
#DEFINE ldtCurrency	3	
#DEFINE ldtCustomer	4	
#DEFINE ldtCustomerMsg	5	
#DEFINE ldtCustomerType	6	
#DEFINE ldtDateDrivenTerms	7	
#DEFINE ldtEmployee	8	
#DEFINE ldtInventorySite	9	
#DEFINE ldtItemDiscount	10	
#DEFINE ldtItemFixedAsset	11	
#DEFINE ldtItemGroup	12	
#DEFINE ldtItemInventory	13	
#DEFINE ldtItemInventoryAssembly	14	
#DEFINE ldtItemNonInventory	15	
#DEFINE ldtItemOtherCharge	16	
#DEFINE ldtItemPayment	17	
#DEFINE ldtItemSalesTax	18	
#DEFINE ldtItemSalesTaxGroup	19	
#DEFINE ldtItemService	20	
#DEFINE ldtItemSubtotal	21	
#DEFINE ldtJobType	22	
#DEFINE ldtOtherName	23	
#DEFINE ldtPaymentMethod	24	
#DEFINE ldtPayrollItemNonWage	25	
#DEFINE ldtPayrollItemWage	26	
#DEFINE ldtPriceLevel	27	
#DEFINE ldtSalesRep	28	
#DEFINE ldtSalesTaxCode	29	
#DEFINE ldtShipMethod	30	
#DEFINE ldtStandardTerms	31	
#DEFINE ldtToDo	32	
#DEFINE ldtUnitOfMeasureSet	33	
#DEFINE ldtVehicle	34	
#DEFINE ldtVendor	35	
#DEFINE ldtVendorType	36	
#DEFINE ldtWorkersCompCode	37	

*--- Constant Group: ENListMergeType
#DEFINE lmtAccount	0	
#DEFINE lmtClass	1	
#DEFINE lmtCustomer	2	
#DEFINE lmtItemDiscount	3	
#DEFINE lmtItemGroup	4	
#DEFINE lmtItemInventory	5	
#DEFINE lmtItemNonInventory	6	
#DEFINE lmtItemOtherCharge	7	
#DEFINE lmtItemPayment	8	
#DEFINE lmtItemSalesTax	9	
#DEFINE lmtItemSalesTaxGroup	10	
#DEFINE lmtItemService	11	
#DEFINE lmtItemSubtotal	12	
#DEFINE lmtVendor	13	

*--- Constant Group: ENTxnDelType
#DEFINE tdtARRefundCreditCard	0	
#DEFINE tdtBill	1	
#DEFINE tdtBillPaymentCheck	2	
#DEFINE tdtBillPaymentCreditCard	3	
#DEFINE tdtBuildAssembly	4	
#DEFINE tdtCharge	5	
#DEFINE tdtCheck	6	
#DEFINE tdtCreditCardCharge	7	
#DEFINE tdtCreditCardCredit	8	
#DEFINE tdtCreditMemo	9	
#DEFINE tdtDeposit	10	
#DEFINE tdtEstimate	11	
#DEFINE tdtInventoryAdjustment	12	
#DEFINE tdtInvoice	13	
#DEFINE tdtItemReceipt	14	
#DEFINE tdtJournalEntry	15	
#DEFINE tdtPurchaseOrder	16	
#DEFINE tdtReceivePayment	17	
#DEFINE tdtSalesOrder	18	
#DEFINE tdtSalesReceipt	19	
#DEFINE tdtSalesTaxPaymentCheck	20	
#DEFINE tdtTimeTracking	21	
#DEFINE tdtTransferInventory	22	
#DEFINE tdtVehicleMileage	23	
#DEFINE tdtVendorCredit	24	

*--- Constant Group: ENTxnVoidType
#DEFINE tvtARRefundCreditCard	0	
#DEFINE tvtBill	1	
#DEFINE tvtBillPaymentCheck	2	
#DEFINE tvtBillPaymentCreditCard	3	
#DEFINE tvtCharge	4	
#DEFINE tvtCheck	5	
#DEFINE tvtCreditCardCharge	6	
#DEFINE tvtCreditCardCredit	7	
#DEFINE tvtCreditMemo	8	
#DEFINE tvtDeposit	9	
#DEFINE tvtInventoryAdjustment	10	
#DEFINE tvtInvoice	11	
#DEFINE tvtItemReceipt	12	
#DEFINE tvtJournalEntry	13	
#DEFINE tvtSalesReceipt	14	
#DEFINE tvtVendorCredit	15	

*--- Constant Group: ENListDisplayAddType
#DEFINE ldatAccount	0	
#DEFINE ldatCustomer	1	
#DEFINE ldatEmployee	2	
#DEFINE ldatItem	3	
#DEFINE ldatOtherName	4	
#DEFINE ldatVendor	5	

*--- Constant Group: ENListDisplayModType
#DEFINE ldmtAccount	0	
#DEFINE ldmtCustomer	1	
#DEFINE ldmtEmployee	2	
#DEFINE ldmtItem	3	
#DEFINE ldmtOtherName	4	
#DEFINE ldmtVendor	5	

*--- Constant Group: ENTxnDisplayAddType
#DEFINE tdatBill	0	
#DEFINE tdatBillPayment	1	
#DEFINE tdatBuildAssembly	2	
#DEFINE tdatCharge	3	
#DEFINE tdatCheck	4	
#DEFINE tdatCreditCardCharge	5	
#DEFINE tdatCreditCardCredit	6	
#DEFINE tdatCreditMemo	7	
#DEFINE tdatDeposit	8	
#DEFINE tdatEstimate	9	
#DEFINE tdatInventoryAdjustment	10	
#DEFINE tdatInvoice	11	
#DEFINE tdatItemReceipt	12	
#DEFINE tdatJournalEntry	13	
#DEFINE tdatPurchaseOrder	14	
#DEFINE tdatReceivePayment	15	
#DEFINE tdatSalesOrder	16	
#DEFINE tdatSalesReceipt	17	
#DEFINE tdatSalesTaxPaymentCheck	18	
#DEFINE tdatVendorCredit	19	

*--- Constant Group: ENTxnDisplayModType
#DEFINE tdmtBill	0	
#DEFINE tdmtBillPaymentCheck	1	
#DEFINE tdmtBillPaymentCreditCard	2	
#DEFINE tdmtBuildAssembly	3	
#DEFINE tdmtCharge	4	
#DEFINE tdmtCheck	5	
#DEFINE tdmtCreditCardCharge	6	
#DEFINE tdmtCreditCardCredit	7	
#DEFINE tdmtCreditMemo	8	
#DEFINE tdmtDeposit	9	
#DEFINE tdmtEstimate	10	
#DEFINE tdmtInventoryAdjustment	11	
#DEFINE tdmtInvoice	12	
#DEFINE tdmtItemReceipt	13	
#DEFINE tdmtJournalEntry	14	
#DEFINE tdmtPurchaseOrder	15	
#DEFINE tdmtReceivePayment	16	
#DEFINE tdmtSalesOrder	17	
#DEFINE tdmtSalesReceipt	18	
#DEFINE tdmtSalesTaxPaymentCheck	19	
#DEFINE tdmtVendorCredit	20	

*--- Constant Group: ENORProgCLSID
#DEFINE orpclsidNA	-1	
#DEFINE orpclsidProgID	0	
#DEFINE orpclsidCLSID	1	

*--- Constant Group: ENORTransactionModifiedDateRangeFilter
#DEFINE ortmdrfNA	-1	
#DEFINE ortmdrfModifiedDateRange	0	
#DEFINE ortmdrfDateMacro	1	

*--- Constant Group: ENORTransactionDateRangeFilter
#DEFINE ortdrffNA	-1	
#DEFINE ortdrffTxnDateRange	0	
#DEFINE ortdrffDateMacro	1	

*--- Constant Group: ENEntityTypeFilter
#DEFINE etfCustomer	0	
#DEFINE etfEmployee	1	
#DEFINE etfOtherName	2	
#DEFINE etfVendor	3	

*--- Constant Group: ENORTransactionEntityFilter
#DEFINE ortefNA	-1	
#DEFINE ortefEntityTypeFilter	0	
#DEFINE ortefListID	1	
#DEFINE ortefFullName	2	
#DEFINE ortefListIDWithChildren	3	
#DEFINE ortefFullNameWithChildren	4	

*--- Constant Group: ENAccountTypeFilter
#DEFINE atfAccountsPayable	0	
#DEFINE atfAccountsReceivable	1	
#DEFINE atfAllowedFor1099	2	
#DEFINE atfAPAndSalesTax	3	
#DEFINE atfAPOrCreditCard	4	
#DEFINE atfARAndAP	5	
#DEFINE atfAsset	6	
#DEFINE atfBalanceSheet	7	
#DEFINE atfBank	8	
#DEFINE atfBankAndARAndAPAndUF	9	
#DEFINE atfBankAndUF	10	
#DEFINE atfCostOfSales	11	
#DEFINE atfCreditCard	12	
#DEFINE atfCurrentAsset	13	
#DEFINE atfCurrentAssetAndExpense	14	
#DEFINE atfCurrentLiability	15	
#DEFINE atfEquity	16	
#DEFINE atfEquityAndIncomeAndExpense	17	
#DEFINE atfExpenseAndOtherExpense	18	
#DEFINE atfFixedAsset	19	
#DEFINE atfIncomeAndExpense	20	
#DEFINE atfIncomeAndOtherIncome	21	
#DEFINE atfLiability	22	
#DEFINE atfLiabilityAndEquity	23	
#DEFINE atfLongTermLiability	24	
#DEFINE atfNonPosting	25	
#DEFINE atfOrdinaryExpense	26	
#DEFINE atfOrdinaryIncome	27	
#DEFINE atfOrdinaryIncomeAndCOGS	28	
#DEFINE atfOrdinaryIncomeAndExpense	29	
#DEFINE atfOtherAsset	30	
#DEFINE atfOtherCurrentAsset	31	
#DEFINE atfOtherCurrentLiability	32	
#DEFINE atfOtherExpense	33	
#DEFINE atfOtherIncome	34	
#DEFINE atfOtherIncomeOrExpense	35	

*--- Constant Group: ENORTransactionAccountFilter
#DEFINE ortafNA	-1	
#DEFINE ortafAccountTypeFilter	0	
#DEFINE ortafListID	1	
#DEFINE ortafFullName	2	
#DEFINE ortafListIDWithChildren	3	
#DEFINE ortafFullNameWithChildren	4	

*--- Constant Group: ENItemTypeFilter
#DEFINE itfAllExceptFixedAsset	0	
#DEFINE itfAssembly	1	
#DEFINE itfDiscount	2	
#DEFINE itfFixedAsset	3	
#DEFINE itfInventory	4	
#DEFINE itfInventoryAndAssembly	5	
#DEFINE itfNonInventory	6	
#DEFINE itfOtherCharge	7	
#DEFINE itfPayment	8	
#DEFINE itfSales	9	
#DEFINE itfSalesTax	10	
#DEFINE itfService	11	

*--- Constant Group: ENORTransactionItemFilter
#DEFINE ortifNA	-1	
#DEFINE ortifItemTypeFilter	0	
#DEFINE ortifListID	1	
#DEFINE ortifFullName	2	
#DEFINE ortifListIDWithChildren	3	
#DEFINE ortifFullNameWithChildren	4	

*--- Constant Group: ENORTransactionClassFilter
#DEFINE ortcfNA	-1	
#DEFINE ortcfListID	0	
#DEFINE ortcfFullName	1	
#DEFINE ortcfListIDWithChildren	2	
#DEFINE ortcfFullNameWithChildren	3	

*--- Constant Group: ENORTransactionRefNumberFilter
#DEFINE ortrnfNA	-1	
#DEFINE ortrnfRefNumber	0	
#DEFINE ortrnfRefNumberCaseSensitive	1	
#DEFINE ortrnfRefNumberFilter	2	
#DEFINE ortrnfRefNumberRangeFilter	3	

*--- Constant Group: ENTransactionDetailLevelFilter
#DEFINE tdlfAll	0	
#DEFINE tdlfSummaryOnly	1	
#DEFINE tdlfAllExceptSummary	2	

*--- Constant Group: ENTransactionPostingStatusFilter
#DEFINE tpsfEither	0	
#DEFINE tpsfNonPosting	1	
#DEFINE tpsfPosting	2	

*--- Constant Group: ENTransactionPaidStatusFilter
#DEFINE tpsffEither	0	
#DEFINE tpsffClosed	1	
#DEFINE tpsffOpen	2	

*--- Constant Group: ENORTransactionQuery
#DEFINE ortqqNA	-1	
#DEFINE ortqqTxnID	0	
#DEFINE ortqqTransactionFilter	1	

*--- Constant Group: ENPendingStatus
#DEFINE pensAll	0	
#DEFINE pensPendingOnly	1	
#DEFINE pensNotPendingOnly	2	

*--- Constant Group: ENORBuildAssemblyQuery
#DEFINE orbaqNA	-1	
#DEFINE orbaqTxnID	0	
#DEFINE orbaqRefNumber	1	
#DEFINE orbaqRefNumberCaseSensitive	2	
#DEFINE orbaqBuildAssemblyFilter	3	

*--- Constant Group: ENORARRefundCreditCardQuery
#DEFINE orarrccqNA	-1	
#DEFINE orarrccqTxnID	0	
#DEFINE orarrccqRefNumber	1	
#DEFINE orarrccqRefNumberCaseSensitive	2	
#DEFINE orarrccqARRefundCreditCardFilter	3	

*--- Constant Group: ENORVehicleMileageAdd
#DEFINE orvmaNA	-1	
#DEFINE orvmaOdometerReadingAdd	0	
#DEFINE orvmaTotalMiles	1	

*--- Constant Group: ENORVehicleMileageQuery
#DEFINE orvmqNA	-1	
#DEFINE orvmqTxnID	0	
#DEFINE orvmqVehicleMileageFilter	1	

*--- Constant Group: ENORSiteFilter
#DEFINE orsfNA	-1	
#DEFINE orsfListID	0	
#DEFINE orsfFullName	1	

*--- Constant Group: ENORTransferInventoryQuery
#DEFINE ortiqNA	-1	
#DEFINE ortiqTxnID	0	
#DEFINE ortiqRefNumber	1	
#DEFINE ortiqRefNumberCaseSensitive	2	
#DEFINE ortiqTxnFilterNoCurrency	3	
#DEFINE ortiqSiteFilter	4	

*--- Constant Group: ENORItemSitesFilter
#DEFINE orisfNA	-1	
#DEFINE orisfItemTypeFilter	0	
#DEFINE orisfItemSiteFilter	1	

*--- Constant Group: ENORItemSitesQuery
#DEFINE orimsqNA	-1	
#DEFINE orimsqListID	0	
#DEFINE orimsqItemSitesFilter	1	

*--- Constant Group: ENORTransferTxnQuery
#DEFINE orttqNA	-1	
#DEFINE orttqTxnID	0	
#DEFINE orttqTransferTxnFilter	1	

*--- Constant Group: ENORReportAccountFilter
#DEFINE orrafNA	-1	
#DEFINE orrafAccountTypeFilter	0	
#DEFINE orrafListID	1	
#DEFINE orrafFullName	2	
#DEFINE orrafListIDWithChildren	3	
#DEFINE orrafFullNameWithChildren	4	

*--- Constant Group: ENORReportEntityFilter
#DEFINE orrefNA	-1	
#DEFINE orrefEntityTypeFilter	0	
#DEFINE orrefListID	1	
#DEFINE orrefFullName	2	
#DEFINE orrefListIDWithChildren	3	
#DEFINE orrefFullNameWithChildren	4	

*--- Constant Group: ENORReportItemFilter
#DEFINE orrifNA	-1	
#DEFINE orrifItemTypeFilter	0	
#DEFINE orrifListID	1	
#DEFINE orrifFullName	2	
#DEFINE orrifListIDWithChildren	3	
#DEFINE orrifFullNameWithChildren	4	

*--- Constant Group: ENORReportClassFilter
#DEFINE orrcfNA	-1	
#DEFINE orrcfListID	0	
#DEFINE orrcfFullName	1	
#DEFINE orrcfListIDWithChildren	2	
#DEFINE orrcfFullNameWithChildren	3	

*--- Constant Group: ENReportDateMacro
#DEFINE rdmAll	0	
#DEFINE rdmToday	1	
#DEFINE rdmThisWeek	2	
#DEFINE rdmThisWeekToDate	3	
#DEFINE rdmThisMonth	4	
#DEFINE rdmThisMonthToDate	5	
#DEFINE rdmThisQuarter	6	
#DEFINE rdmThisQuarterToDate	7	
#DEFINE rdmThisYear	8	
#DEFINE rdmThisYearToDate	9	
#DEFINE rdmYesterday	10	
#DEFINE rdmLastWeek	11	
#DEFINE rdmLastWeekToDate	12	
#DEFINE rdmLastMonth	13	
#DEFINE rdmLastMonthToDate	14	
#DEFINE rdmLastQuarter	15	
#DEFINE rdmLastQuarterToDate	16	
#DEFINE rdmLastYear	17	
#DEFINE rdmLastYearToDate	18	
#DEFINE rdmNextWeek	19	
#DEFINE rdmNextFourWeeks	20	
#DEFINE rdmNextMonth	21	
#DEFINE rdmNextQuarter	22	
#DEFINE rdmNextYear	23	

*--- Constant Group: ENORReportPeriod
#DEFINE orrpNA	-1	
#DEFINE orrpReportPeriod	0	
#DEFINE orrpReportDateMacro	1	

*--- Constant Group: ENReportModifiedDateRangeMacro
#DEFINE rmdrmAll	0	
#DEFINE rmdrmToday	1	
#DEFINE rmdrmThisWeek	2	
#DEFINE rmdrmThisWeekToDate	3	
#DEFINE rmdrmThisMonth	4	
#DEFINE rmdrmThisMonthToDate	5	
#DEFINE rmdrmThisQuarter	6	
#DEFINE rmdrmThisQuarterToDate	7	
#DEFINE rmdrmThisYear	8	
#DEFINE rmdrmThisYearToDate	9	
#DEFINE rmdrmYesterday	10	
#DEFINE rmdrmLastWeek	11	
#DEFINE rmdrmLastWeekToDate	12	
#DEFINE rmdrmLastMonth	13	
#DEFINE rmdrmLastMonthToDate	14	
#DEFINE rmdrmLastQuarter	15	
#DEFINE rmdrmLastQuarterToDate	16	
#DEFINE rmdrmLastYear	17	
#DEFINE rmdrmLastYearToDate	18	
#DEFINE rmdrmNextWeek	19	
#DEFINE rmdrmNextFourWeeks	20	
#DEFINE rmdrmNextMonth	21	
#DEFINE rmdrmNextQuarter	22	
#DEFINE rmdrmNextYear	23	

*--- Constant Group: ENORReportModifiedDate
#DEFINE orrmdNA	-1	
#DEFINE orrmdReportModifiedDateRangeFilter	0	
#DEFINE orrmdReportModifiedDateRangeMacro	1	

*--- Constant Group: ENGeneralSummaryReportType
#DEFINE gsrtBalanceSheetByClass	0	
#DEFINE gsrtBalanceSheetPrevYearComp	1	
#DEFINE gsrtBalanceSheetStandard	2	
#DEFINE gsrtBalanceSheetSummary	3	
#DEFINE gsrtCustomerBalanceSummary	4	
#DEFINE gsrtExpenseByVendorSummary	5	
#DEFINE gsrtIncomeByCustomerSummary	6	
#DEFINE gsrtInventoryStockStatusByItem	7	
#DEFINE gsrtInventoryStockStatusByVendor	8	
#DEFINE gsrtIncomeTaxSummary	9	
#DEFINE gsrtInventoryValuationSummary	10	
#DEFINE gsrtInventoryValuationSummaryBySite	11	
#DEFINE gsrtLotNumberInStockBySite	12	
#DEFINE gsrtPhysicalInventoryWorksheet	13	
#DEFINE gsrtProfitAndLossByClass	14	
#DEFINE gsrtProfitAndLossByJob	15	
#DEFINE gsrtProfitAndLossPrevYearComp	16	
#DEFINE gsrtProfitAndLossStandard	17	
#DEFINE gsrtProfitAndLossYTDComp	18	
#DEFINE gsrtPurchaseByItemSummary	19	
#DEFINE gsrtPurchaseByVendorSummary	20	
#DEFINE gsrtSalesByCustomerSummary	21	
#DEFINE gsrtSalesByItemSummary	22	
#DEFINE gsrtSalesByRepSummary	23	
#DEFINE gsrtSalesTaxLiability	24	
#DEFINE gsrtSalesTaxRevenueSummary	25	
#DEFINE gsrtSerialNumberInStockBySite	26	
#DEFINE gsrtTrialBalance	27	
#DEFINE gsrtVendorBalanceSummary	28	

*--- Constant Group: ENReportDetailLevelFilter
#DEFINE rdlfAll	0	
#DEFINE rdlfAllExceptSummary	1	
#DEFINE rdlfSummaryOnly	2	

*--- Constant Group: ENReportPostingStatusFilter
#DEFINE rpsfEither	0	
#DEFINE rpsfNonPosting	1	
#DEFINE rpsfPosting	2	

*--- Constant Group: ENSummarizeColumnsBy
#DEFINE scbAccount	0	
#DEFINE scbBalanceSheet	1	
#DEFINE scbClass	2	
#DEFINE scbCustomer	3	
#DEFINE scbCustomerType	4	
#DEFINE scbDay	5	
#DEFINE scbEmployee	6	
#DEFINE scbFourWeek	7	
#DEFINE scbHalfMonth	8	
#DEFINE scbIncomeStatement	9	
#DEFINE scbItemDetail	10	
#DEFINE scbItemType	11	
#DEFINE scbMonth	12	
#DEFINE scbPayee	13	
#DEFINE scbPaymentMethod	14	
#DEFINE scbPayrollItemDetail	15	
#DEFINE scbPayrollYtdDetail	16	
#DEFINE scbQuarter	17	
#DEFINE scbSalesRep	18	
#DEFINE scbSalesTaxCode	19	
#DEFINE scbShipMethod	20	
#DEFINE scbTerms	21	
#DEFINE scbTotalOnly	22	
#DEFINE scbTwoWeek	23	
#DEFINE scbVendor	24	
#DEFINE scbVendorType	25	
#DEFINE scbWeek	26	
#DEFINE scbYear	27	

*--- Constant Group: ENReportCalendar
#DEFINE rcCalendarYear	0	
#DEFINE rcFiscalYear	1	
#DEFINE rcTaxYear	2	

*--- Constant Group: ENReturnRows
#DEFINE rrActiveOnly	0	
#DEFINE rrNonZero	1	
#DEFINE rrAll	2	

*--- Constant Group: ENReturnColumns
#DEFINE rcActiveOnly	0	
#DEFINE rcNonZero	1	
#DEFINE rcAll	2	

*--- Constant Group: ENReportBasis
#DEFINE rbAccrual	0	
#DEFINE rbCash	1	
#DEFINE rbNone	2	

*--- Constant Group: ENJobReportType
#DEFINE jrtItemEstimatesVsActuals	0	
#DEFINE jrtItemProfitability	1	
#DEFINE jrtJobEstimatesVsActualsDetail	2	
#DEFINE jrtJobEstimatesVsActualsSummary	3	
#DEFINE jrtJobProfitabilityDetail	4	
#DEFINE jrtJobProfitabilitySummary	5	
#DEFINE jrt	6	

*--- Constant Group: ENTimeReportType
#DEFINE trtTimeByItem	0	
#DEFINE trtTimeByJobDetail	1	
#DEFINE trtTimeByJobSummary	2	
#DEFINE trtTimeByName	3	

*--- Constant Group: ENIncludeColumn
#DEFINE icAccount	0	
#DEFINE icAging	1	
#DEFINE icAmount	2	
#DEFINE icAmountDifference	3	
#DEFINE icAverageCost	4	
#DEFINE icBilledDate	5	
#DEFINE icBillingStatus	6	
#DEFINE icCalculatedAmount	7	
#DEFINE icClass	8	
#DEFINE icClearedStatus	9	
#DEFINE icCostPrice	10	
#DEFINE icCredit	11	
#DEFINE icCurrency	12	
#DEFINE icDate	13	
#DEFINE icDebit	14	
#DEFINE icDeliveryDate	15	
#DEFINE icDueDate	16	
#DEFINE icEstimateActive	17	
#DEFINE icExchangeRate	18	
#DEFINE icFOB	19	
#DEFINE icIncomeSubjectToTax	20	
#DEFINE icInvoiced	21	
#DEFINE icItem	22	
#DEFINE icItemDesc	23	
#DEFINE icLastModifiedBy	24	
#DEFINE icLatestOrPriorState	25	
#DEFINE icMemo	26	
#DEFINE icModifiedTime	27	
#DEFINE icName	28	
#DEFINE icNameAccountNumber	29	
#DEFINE icNameAddress	30	
#DEFINE icNameCity	31	
#DEFINE icNameContact	32	
#DEFINE icNameEmail	33	
#DEFINE icNameFax	34	
#DEFINE icNamePhone	35	
#DEFINE icNameState	36	
#DEFINE icNameZip	37	
#DEFINE icOpenBalance	38	
#DEFINE icOriginalAmount	39	
#DEFINE icPaidAmount	40	
#DEFINE icPaidStatus	41	
#DEFINE icPaidThroughDate	42	
#DEFINE icPaymentMethod	43	
#DEFINE icPayrollItem	44	
#DEFINE icPONumber	45	
#DEFINE icPrintStatus	46	
#DEFINE icProgressAmount	47	
#DEFINE icProgressPercent	48	
#DEFINE icQuantity	49	
#DEFINE icQuantityAvailable	50	
#DEFINE icQuantityOnHand	51	
#DEFINE icQuantityOnSalesOrder	52	
#DEFINE icReceivedQuantity	53	
#DEFINE icRefNumber	54	
#DEFINE icRunningBalance	55	
#DEFINE icSalesRep	56	
#DEFINE icSalesTaxCode	57	
#DEFINE icSerialOrLotNumber	58	
#DEFINE icShipDate	59	
#DEFINE icShipMethod	60	
#DEFINE icSourceName	61	
#DEFINE icSplitAccount	62	
#DEFINE icSSNOrTaxID	63	
#DEFINE icTaxLine	64	
#DEFINE icTaxTableVersion	65	
#DEFINE icTerms	66	
#DEFINE icTxnID	67	
#DEFINE icTxnNumber	68	
#DEFINE icTxnType	69	
#DEFINE icUnitPrice	70	
#DEFINE icUserEdit	71	
#DEFINE icValueOnHand	72	
#DEFINE icWageBase	73	
#DEFINE icWageBaseTips	74	

*--- Constant Group: ENAgingReportType
#DEFINE artAPAgingDetail	0	
#DEFINE artAPAgingSummary	1	
#DEFINE artARAgingDetail	2	
#DEFINE artARAgingSummary	3	
#DEFINE artCollectionsReport	4	

*--- Constant Group: ENIncludeAccounts
#DEFINE iaAll	0	
#DEFINE iaInUse	1	

*--- Constant Group: ENReportAgingAsOf
#DEFINE raaoReportEndDate	0	
#DEFINE raaoToday	1	

*--- Constant Group: ENBudgetSummaryReportType
#DEFINE bsrtBalanceSheetBudgetOverview	0	
#DEFINE bsrtBalanceSheetBudgetVsActual	1	
#DEFINE bsrtProfitAndLossBudgetOverview	2	
#DEFINE bsrtProfitAndLossBudgetPerformance	3	
#DEFINE bsrtProfitAndLossBudgetVsActual	4	

*--- Constant Group: ENBudgetCriterion
#DEFINE bcAccounts	0	
#DEFINE bcAccountsAndClasses	1	
#DEFINE bcAccountsAndCustomers	2	

*--- Constant Group: ENSummarizeBudgetColumnsBy
#DEFINE sbcbClass	0	
#DEFINE sbcbCustomer	1	
#DEFINE sbcbDate	2	

*--- Constant Group: ENSummarizeBudgetRowsBy
#DEFINE sbrbAccount	0	
#DEFINE sbrbClass	1	
#DEFINE sbrbCustomer	2	

*--- Constant Group: ENGeneralDetailReportType
#DEFINE gdrt1099Detail	0	
#DEFINE gdrtAuditTrail	1	
#DEFINE gdrtBalanceSheetDetail	2	
#DEFINE gdrtCheckDetail	3	
#DEFINE gdrtCustomerBalanceDetail	4	
#DEFINE gdrtDepositDetail	5	
#DEFINE gdrtEstimatesByJob	6	
#DEFINE gdrtExpenseByVendorDetail	7	
#DEFINE gdrtGeneralLedger	8	
#DEFINE gdrtIncomeByCustomerDetail	9	
#DEFINE gdrtIncomeTaxDetail	10	
#DEFINE gdrtInventoryValuationDetail	11	
#DEFINE gdrtJobProgressInvoicesVsEstimates	12	
#DEFINE gdrtJournal	13	
#DEFINE gdrtMissingChecks	14	
#DEFINE gdrtOpenInvoices	15	
#DEFINE gdrtOpenPOs	16	
#DEFINE gdrtOpenPOsByJob	17	
#DEFINE gdrtOpenSalesOrderByCustomer	18	
#DEFINE gdrtOpenSalesOrderByItem	19	
#DEFINE gdrtPendingSales	20	
#DEFINE gdrtProfitAndLossDetail	21	
#DEFINE gdrtPurchaseByItemDetail	22	
#DEFINE gdrtPurchaseByVendorDetail	23	
#DEFINE gdrtSalesByCustomerDetail	24	
#DEFINE gdrtSalesByItemDetail	25	
#DEFINE gdrtSalesByRepDetail	26	
#DEFINE gdrtTxnDetailByAccount	27	
#DEFINE gdrtTxnListByCustomer	28	
#DEFINE gdrtTxnListByDate	29	
#DEFINE gdrtTxnListByVendor	30	
#DEFINE gdrtUnpaidBillsDetail	31	
#DEFINE gdrtUnbilledCostsByJob	32	
#DEFINE gdrtVendorBalanceDetail	33	

*--- Constant Group: ENSummarizeRowsBy
#DEFINE srbAccount	0	
#DEFINE srbBalanceSheet	1	
#DEFINE srbClass	2	
#DEFINE srbCustomer	3	
#DEFINE srbCustomerType	4	
#DEFINE srbDay	5	
#DEFINE srbEmployee	6	
#DEFINE srbFourWeek	7	
#DEFINE srbHalfMonth	8	
#DEFINE srbIncomeStatement	9	
#DEFINE srbItemDetail	10	
#DEFINE srbItemType	11	
#DEFINE srbMonth	12	
#DEFINE srbPayee	13	
#DEFINE srbPaymentMethod	14	
#DEFINE srbPayrollItemDetail	15	
#DEFINE srbPayrollYtdDetail	16	
#DEFINE srbQuarter	17	
#DEFINE srbSalesRep	18	
#DEFINE srbSalesTaxCode	19	
#DEFINE srbShipMethod	20	
#DEFINE srbTaxLine	21	
#DEFINE srbTerms	22	
#DEFINE srbTotalOnly	23	
#DEFINE srbTwoWeek	24	
#DEFINE srbVendor	25	
#DEFINE srbVendorType	26	
#DEFINE srbWeek	27	
#DEFINE srbYear	28	

*--- Constant Group: ENReportOpenBalanceAsOf
#DEFINE robaoReportEndDate	0	
#DEFINE robaoToday	1	

*--- Constant Group: ENCustomDetailReportType
#DEFINE cdrtCustomTxnDetail	0	

*--- Constant Group: ENCustomSummaryReportType
#DEFINE csrtCustomSummary	0	

*--- Constant Group: ENPayrollDetailReportType
#DEFINE pdrtEmployeeStateTaxesDetail	0	
#DEFINE pdrtPayrollItemDetail	1	
#DEFINE pdrtPayrollReviewDetail	2	
#DEFINE pdrtPayrollTransactionDetail	3	
#DEFINE pdrtPayrollTransactionsByPayee	4	

*--- Constant Group: ENPayrollSummaryReportType
#DEFINE psrtEmployeeEarningsSummary	0	
#DEFINE psrtPayrollLiabilityBalances	1	
#DEFINE psrtPayrollSummary	2	

*--- Constant Group: ENAssignToObject
#DEFINE atoAccount	0	
#DEFINE atoARRefundCreditCard	1	
#DEFINE atoBill	2	
#DEFINE atoBillPaymentCheck	3	
#DEFINE atoBillPaymentCreditCard	4	
#DEFINE atoBuildAssembly	5	
#DEFINE atoCharge	6	
#DEFINE atoCheck	7	
#DEFINE atoCompany	8	
#DEFINE atoCreditCardCharge	9	
#DEFINE atoCreditCardCredit	10	
#DEFINE atoCreditMemo	11	
#DEFINE atoCustomer	12	
#DEFINE atoDeposit	13	
#DEFINE atoEmployee	14	
#DEFINE atoEstimate	15	
#DEFINE atoInventoryAdjustment	16	
#DEFINE atoInvoice	17	
#DEFINE atoItem	18	
#DEFINE atoItemReceipt	19	
#DEFINE atoJournalEntry	20	
#DEFINE atoOtherName	21	
#DEFINE atoPurchaseOrder	22	
#DEFINE atoReceivePayment	23	
#DEFINE atoSalesOrder	24	
#DEFINE atoSalesReceipt	25	
#DEFINE atoSalesTaxPaymentCheck	26	
#DEFINE atoVendor	27	
#DEFINE atoVendorCredit	28	

*--- Constant Group: ENORDataExtDefQuery
#DEFINE ordedqNA	-1	
#DEFINE ordedqOwnerID	0	
#DEFINE ordedqAssignToObject	1	

*--- Constant Group: ENListDataExtType
#DEFINE ldetAccount	0	
#DEFINE ldetCustomer	1	
#DEFINE ldetEmployee	2	
#DEFINE ldetItem	3	
#DEFINE ldetOtherName	4	
#DEFINE ldetVendor	5	

*--- Constant Group: ENTxnDataExtType
#DEFINE tdetARRefundCreditCard	0	
#DEFINE tdetBill	1	
#DEFINE tdetBillPaymentCheck	2	
#DEFINE tdetBillPaymentCreditCard	3	
#DEFINE tdetBuildAssembly	4	
#DEFINE tdetCharge	5	
#DEFINE tdetCheck	6	
#DEFINE tdetCreditCardCharge	7	
#DEFINE tdetCreditCardCredit	8	
#DEFINE tdetCreditMemo	9	
#DEFINE tdetDeposit	10	
#DEFINE tdetEstimate	11	
#DEFINE tdetInventoryAdjustment	12	
#DEFINE tdetInvoice	13	
#DEFINE tdetItemReceipt	14	
#DEFINE tdetJournalEntry	15	
#DEFINE tdetPurchaseOrder	16	
#DEFINE tdetReceivePayment	17	
#DEFINE tdetSalesOrder	18	
#DEFINE tdetSalesReceipt	19	
#DEFINE tdetSalesTaxPaymentCheck	20	
#DEFINE tdetVendorCredit	21	

*--- Constant Group: ENOtherDataExtType
#DEFINE odetCompany	0	

*--- Constant Group: ENORListTxnWithMacro
#DEFINE orltwmNA	-1	
#DEFINE orltwmListDataExt	0	
#DEFINE orltwmTxnDataExtWithMacro	1	
#DEFINE orltwmOtherDataExtType	2	

*--- Constant Group: ENORListTxn
#DEFINE orltNA	-1	
#DEFINE orltListDataExt	0	
#DEFINE orltTxnDataExt	1	
#DEFINE orltOtherDataExtType	2	

*--- Constant Group: ENORListOwnerTxn
#DEFINE orlotNA	-1	
#DEFINE orlotListID	0	
#DEFINE orlotOwnerID	1	
#DEFINE orlotTxnID	2	

*--- Constant Group: ENORPriceLevelRet
#DEFINE orplrNA	-1	
#DEFINE orplrPriceLevelFixedPercentage	0	
#DEFINE orplrPriceLevelPerItemRetCurrency	1	

*--- Constant Group: ENORBillingRateRet
#DEFINE orbrrNA	-1	
#DEFINE orbrrFixedBillingRate	0	
#DEFINE orbrrBillingRatePerItemRet	1	

*--- Constant Group: ENORInvoiceLineRet
#DEFINE orilr1NA	-1	
#DEFINE orilrInvoiceLineRet	0	
#DEFINE orilrInvoiceLineGroupRet	1	

*--- Constant Group: ENORDiscountLineRet
#DEFINE ordlrNA	-1	
#DEFINE ordlrAmount	0	
#DEFINE ordlrRatePercent	1	

*--- Constant Group: ENORSalesTaxLineRet
#DEFINE orstlrNA	-1	
#DEFINE orstlrAmount	0	
#DEFINE orstlrRatePercent	1	

*--- Constant Group: ENOREstimateLineRet
#DEFINE orelrNA	-1	
#DEFINE orelrEstimateLineRet	0	
#DEFINE orelrEstimateLineGroupRet	1	

*--- Constant Group: ENORMarkupRate
#DEFINE ormrNA	-1	
#DEFINE ormrMarkupRate	0	
#DEFINE ormrMarkupRatePercent	1	

*--- Constant Group: ENORSalesOrderLineRet
#DEFINE orsolrNA	-1	
#DEFINE orsolrSalesOrderLineRet	0	
#DEFINE orsolrSalesOrderLineGroupRet	1	

*--- Constant Group: ENORSalesReceiptLineRet
#DEFINE orsrlrNA	-1	
#DEFINE orsrlrSalesReceiptLineRet	0	
#DEFINE orsrlrSalesReceiptLineGroupRet	1	

*--- Constant Group: ENORCreditMemoLineRet
#DEFINE orcmlrNA	-1	
#DEFINE orcmlrCreditMemoLineRet	0	
#DEFINE orcmlrCreditMemoLineGroupRet	1	

*--- Constant Group: ENORPurchaseOrderLineRet
#DEFINE orpolrNA	-1	
#DEFINE orpolrPurchaseOrderLineRet	0	
#DEFINE orpolrPurchaseOrderLineGroupRet	1	

*--- Constant Group: ENORItemLineRet
#DEFINE orilrNA	-1	
#DEFINE orilrItemLineRet	0	
#DEFINE orilrItemGroupLineRet	1	

*--- Constant Group: ENORBillToPayRet
#DEFINE orbtprNA	-1	
#DEFINE orbtprBillToPay	0	
#DEFINE orbtprCreditToApply	1	

*--- Constant Group: ENSerialNumberAddedOrRemoved
#DEFINE snaorAdded	0	
#DEFINE snaorRemoved	1	

*--- Constant Group: ENORSerialLotNumberPreference
#DEFINE orslnpNA	-1	
#DEFINE orslnpSerialNumberRet	0	
#DEFINE orslnpLotNumber	1	

*--- Constant Group: ENORItemAssemblyORInventory
#DEFINE oriaoriNA	-1	
#DEFINE oriaoriItemInventoryAssemblyRef	0	
#DEFINE oriaoriItemInventoryRef	1	

*--- Constant Group: ENORReportData
#DEFINE orrdNA	-1	
#DEFINE orrdDataRow	0	
#DEFINE orrdTextRow	1	
#DEFINE orrdSubtotalRow	2	
#DEFINE orrdTotalRow	3	

*--- Constant Group: ENORMenuSubmenu
#DEFINE ormsNA	-1	
#DEFINE ormsSubmenu	0	
#DEFINE ormsMenuItem	1	

*--- Constant Group: ENSubscriptionType
#DEFINE stData	0	
#DEFINE stUI	1	
#DEFINE stUIExtension	2	

*--- Constant Group: ENORListTxnEvent
#DEFINE orlteNA	-1	
#DEFINE orlteListEvent	0	
#DEFINE orlteTxnEvent	1	

*--- Constant Group: ENTxnType
#DEFINE ttARRefundCreditCard	0	
#DEFINE ttBill	1	
#DEFINE ttBillPaymentCheck	2	
#DEFINE ttBillPaymentCreditCard	3	
#DEFINE ttBuildAssembly	4	
#DEFINE ttCharge	5	
#DEFINE ttCheck	6	
#DEFINE ttCreditCardCharge	7	
#DEFINE ttCreditCardCredit	8	
#DEFINE ttCreditMemo	9	
#DEFINE ttDeposit	10	
#DEFINE ttEstimate	11	
#DEFINE ttInventoryAdjustment	12	
#DEFINE ttInvoice	13	
#DEFINE ttItemReceipt	14	
#DEFINE ttJournalEntry	15	
#DEFINE ttLiabilityAdjustment	16	
#DEFINE ttPaycheck	17	
#DEFINE ttPayrollLiabilityCheck	18	
#DEFINE ttPurchaseOrder	19	
#DEFINE ttReceivePayment	20	
#DEFINE ttSalesOrder	21	
#DEFINE ttSalesReceipt	22	
#DEFINE ttSalesTaxPaymentCheck	23	
#DEFINE ttTransfer	24	
#DEFINE ttVendorCredit	25	
#DEFINE ttYTDAdjustment	26	

*--- Constant Group: ENListType
#DEFINE ltAccount	0	
#DEFINE ltClass	1	
#DEFINE ltCustomer	2	
#DEFINE ltCustomerMsg	3	
#DEFINE ltCustomerType	4	
#DEFINE ltDateDrivenTerms	5	
#DEFINE ltEmployee	6	
#DEFINE ltItemDiscount	7	
#DEFINE ltItemFixedAsset	8	
#DEFINE ltItemGroup	9	
#DEFINE ltItemInventory	10	
#DEFINE ltItemInventoryAssembly	11	
#DEFINE ltItemNonInventory	12	
#DEFINE ltItemOtherCharge	13	
#DEFINE ltItemPayment	14	
#DEFINE ltItemSalesTax	15	
#DEFINE ltItemSalesTaxGroup	16	
#DEFINE ltItemService	17	
#DEFINE ltItemSubtotal	18	
#DEFINE ltJobType	19	
#DEFINE ltOtherName	20	
#DEFINE ltPaymentMethod	21	
#DEFINE ltPriceLevel	22	
#DEFINE ltSalesRep	23	
#DEFINE ltSalesTaxCode	24	
#DEFINE ltShipMethod	25	
#DEFINE ltStandardTerms	26	
#DEFINE ltToDo	27	
#DEFINE ltVendor	28	
#DEFINE ltVendorType	29	

*--- Constant Group: ENORCurrentWindow
#DEFINE orcwNA	-1	
#DEFINE orcwTxnTypeID	0	
#DEFINE orcwListTypeID	1	

*--- Constant Group: ENOREntityRet
#DEFINE orerNA	-1	
#DEFINE orerCustomerRet	0	
#DEFINE orerEmployeeRet	1	
#DEFINE orerOtherNameRet	2	
#DEFINE orerVendorRet	3	

*--- Constant Group: ENORTermsRet
#DEFINE ortrNA	-1	
#DEFINE ortrStandardTermsRet	0	
#DEFINE ortrDateDrivenTermsRet	1	

*--- Constant Group: ENORSpecialItemRet
#DEFINE orsirNA	-1	
#DEFINE orsirItemOtherChargeRet	0	
#DEFINE orsirItemSubtotalRet	1	
#DEFINE orsirItemGroupRet	2	

*--- Constant Group: ENOREvent
#DEFINE orevNA	-1	
#DEFINE orevDataEvent	0	
#DEFINE orevUIEvent	1	
#DEFINE orevUIExtensionEvent	2	

*--- Constant Group: ENORItemRet
#DEFINE orirNA	-1	
#DEFINE orirItemServiceRet	0	
#DEFINE orirItemNonInventoryRet	1	
#DEFINE orirItemOtherChargeRet	2	
#DEFINE orirItemInventoryRet	3	
#DEFINE orirItemInventoryAssemblyRet	4	
#DEFINE orirItemFixedAssetRet	5	
#DEFINE orirItemSubtotalRet	6	
#DEFINE orirItemDiscountRet	7	
#DEFINE orirItemPaymentRet	8	
#DEFINE orirItemSalesTaxRet	9	
#DEFINE orirItemSalesTaxGroupRet	10	
#DEFINE orirItemGroupRet	11	

*--- Constant Group: ENDetailAccountType
#DEFINE datAP	0	
#DEFINE datAR	1	
#DEFINE datAccumulatedAdjustment	2	
#DEFINE datAccumulatedAmortization	3	
#DEFINE datAccumulatedAmortizationOfOtherAssets	4	
#DEFINE datAccumulatedDepletion	5	
#DEFINE datAccumulatedDepreciation	6	
#DEFINE datAdvertisingOrPromotional	7	
#DEFINE datAllowanceForBadDebts	8	
#DEFINE datAmortization	9	
#DEFINE datAuto	10	
#DEFINE datBadDebts	11	
#DEFINE datBankCharges	12	
#DEFINE datBuildings	13	
#DEFINE datCashOnHand	14	
#DEFINE datCharitableContributions	15	
#DEFINE datChecking	16	
#DEFINE datCommonStock	17	
#DEFINE datCostOfLabor	18	
#DEFINE datCostOfLaborCOS	19	
#DEFINE datCreditCard	20	
#DEFINE datDepletableAssets	21	
#DEFINE datDepreciation	22	
#DEFINE datDevelopmentCosts	23	
#DEFINE datDiscountsOrRefundsGiven	24	
#DEFINE datDividendIncome	25	
#DEFINE datDuesAndSubscriptions	26	
#DEFINE datEmployeeCashAdvances	27	
#DEFINE datEntertainment	28	
#DEFINE datEntertainmentMeals	29	
#DEFINE datEquipmentRental	30	
#DEFINE datEquipmentRentalCOS	31	
#DEFINE datFederalIncomeTaxPayable	32	
#DEFINE datFurnitureAndFixtures	33	
#DEFINE datGoodwill	34	
#DEFINE datInsurance	35	
#DEFINE datInsurancePayable	36	
#DEFINE datIntangibleAssets	37	
#DEFINE datInterestEarned	38	
#DEFINE datInterestPaid	39	
#DEFINE datInventory	40	
#DEFINE datInvestmentMortgageOrRealEstateLoans	41	
#DEFINE datInvestmentOther	42	
#DEFINE datInvestmentTaxExemptSecurities	43	
#DEFINE datInvestmentUSGovObligations	44	
#DEFINE datLand	45	
#DEFINE datLeaseBuyout	46	
#DEFINE datLeaseholdImprovements	47	
#DEFINE datLegalAndProfessionalFees	48	
#DEFINE datLicenses	49	
#DEFINE datLineOfCredit	50	
#DEFINE datLoanPayable	51	
#DEFINE datLoansToOfficers	52	
#DEFINE datLoansToOthers	53	
#DEFINE datLoansToStockholders	54	
#DEFINE datMachineryAndEquipment	55	
#DEFINE datMoneyMarket	56	
#DEFINE datNonProfitIncome	57	
#DEFINE datNotesPayable	58	
#DEFINE datOfficeOrGeneralAdministrativeExpenses	59	
#DEFINE datOpeningBalanceEquity	60	
#DEFINE datOrganizationalCosts	61	
#DEFINE datOtherCostsOfServiceCOS	62	
#DEFINE datOtherCurrentAssets	63	
#DEFINE datOtherCurrentLiab	64	
#DEFINE datOtherFixedAssets	65	
#DEFINE datOtherInvestmentIncome	66	
#DEFINE datOtherLongTermAssets	67	
#DEFINE datOtherLongTermLiab	68	
#DEFINE datOtherMiscExpense	69	
#DEFINE datOtherMiscIncome	70	
#DEFINE datOtherMiscServiceCost	71	
#DEFINE datOtherPrimaryIncome	72	
#DEFINE datOwnersEquity	73	
#DEFINE datPaidInCapitalOrSurplus	74	
#DEFINE datPartnerContributions	75	
#DEFINE datPartnerDistributions	76	
#DEFINE datPartnersEquity	77	
#DEFINE datPayrollClearing	78	
#DEFINE datPayrollExpenses	79	
#DEFINE datPayrollTaxPayable	80	
#DEFINE datPenaltiesAndSettlements	81	
#DEFINE datPreferredStock	82	
#DEFINE datPrepaidExpenses	83	
#DEFINE datPrepaidExpensesPayable	84	
#DEFINE datPromotionalMeals	85	
#DEFINE datRentOrLeaseOfBuildings	86	
#DEFINE datRentsHeldInTrust	87	
#DEFINE datRentsInTrustLiab	88	
#DEFINE datRepairAndMaintenance	89	
#DEFINE datRetainage	90	
#DEFINE datRetainedEarnings	91	
#DEFINE datSalesOfProductIncome	92	
#DEFINE datSalesTaxPayable	93	
#DEFINE datSavings	94	
#DEFINE datSecurityDeposits	95	
#DEFINE datServiceOrFeeIncome	96	
#DEFINE datShareholderNotesPayable	97	
#DEFINE datShippingFreightAndDelivery	98	
#DEFINE datShippingFreightAndDeliveryCOS	99	
#DEFINE datStateOrLocalIncomeTaxPayable	100	
#DEFINE datSuppliesAndMaterials	101	
#DEFINE datSuppliesAndMaterialsCOGS	102	
#DEFINE datTaxExemptInterest	103	
#DEFINE datTaxesPaid	104	
#DEFINE datTravel	105	
#DEFINE datTravelMeals	106	
#DEFINE datTreasuryStock	107	
#DEFINE datTrustAccounts	108	
#DEFINE datTrustAccountsLiab	109	
#DEFINE datUndepositedFunds	110	
#DEFINE datUtilities	111	
#DEFINE datVehicles	112	

*--- Constant Group: ENSpecialAccountType
#DEFINE satAccountsPayable	0	
#DEFINE satAccountsReceivable	1	
#DEFINE satCondenseItemAdjustmentExpenses	2	
#DEFINE satCostOfGoodsSold	3	
#DEFINE satDirectDepositLiabilities	4	
#DEFINE satEstimates	5	
#DEFINE satExchangeGainLoss	6	
#DEFINE satInventoryAssets	7	
#DEFINE satItemReceiptAccount	8	
#DEFINE satOpeningBalanceEquity	9	
#DEFINE satPayrollExpenses	10	
#DEFINE satPayrollLiabilities	11	
#DEFINE satPettyCash	12	
#DEFINE satPurchaseOrders	13	
#DEFINE satReconciliationDifferences	14	
#DEFINE satRetainedEarnings	15	
#DEFINE satSalesOrders	16	
#DEFINE satSalesTaxPayable	17	
#DEFINE satUncategorizedExpenses	18	
#DEFINE satUncategorizedIncome	19	
#DEFINE satUndepositedFunds	20	

*--- Constant Group: ENCashFlowClassification
#DEFINE cfcNone	0	
#DEFINE cfcOperating	1	
#DEFINE cfcInvesting	2	
#DEFINE cfcFinancing	3	
#DEFINE cfcNotApplicable	4	

*--- Constant Group: ENSpecialItemType
#DEFINE sitFinanceCharge	0	
#DEFINE sitReimbursableExpenseGroup	1	
#DEFINE sitReimbursableExpenseSubtotal	2	

*--- Constant Group: ENSalesTaxCountry
#DEFINE stcAustralia	0	
#DEFINE stcCanada	1	
#DEFINE stcUK	2	
#DEFINE stcUS	3	

*--- Constant Group: ENJobStatus
#DEFINE jsAwarded	0	
#DEFINE jsClosed	1	
#DEFINE jsInProgress	2	
#DEFINE jsNone	3	
#DEFINE jsNotAwarded	4	
#DEFINE jsPending	5	

*--- Constant Group: ENDeliveryMethod
#DEFINE dmEmail	0	
#DEFINE dmFax	1	
#DEFINE dmPrint	2	

*--- Constant Group: ENPreferredDeliveryMethod
#DEFINE pdmNone	0	
#DEFINE pdmEmail	1	
#DEFINE pdmFax	2	

*--- Constant Group: ENPriceLevelType
#DEFINE pltFixedPercentage	0	
#DEFINE pltPerItem	1	

*--- Constant Group: ENAVSStreet
#DEFINE avssPass	0	
#DEFINE avssFail	1	
#DEFINE avssNotAvailable	2	

*--- Constant Group: ENAVSZip
#DEFINE avszPass	0	
#DEFINE avszFail	1	
#DEFINE avszNotAvailable	2	

*--- Constant Group: ENCardSecurityCodeMatch
#DEFINE cscmPass	0	
#DEFINE cscmFail	1	
#DEFINE cscmNotAvailable	2	

*--- Constant Group: ENPaymentStatus
#DEFINE pssUnknown	0	
#DEFINE pssCompleted	1	

*--- Constant Group: ENUnitUsedFor
#DEFINE uufPurchase	0	
#DEFINE uufSales	1	
#DEFINE uufShipping	2	

*--- Constant Group: ENPayPeriod
#DEFINE ppDaily	0	
#DEFINE ppWeekly	1	
#DEFINE ppBiweekly	2	
#DEFINE ppSemimonthly	3	
#DEFINE ppMonthly	4	
#DEFINE ppQuarterly	5	
#DEFINE ppYearly	6	

*--- Constant Group: ENUseTimeDataToCreatePaychecks
#DEFINE utdtcpNotSet	0	
#DEFINE utdtcpUseTimeData	1	
#DEFINE utdtcpDoNotUseTimeData	2	

*--- Constant Group: ENTxnTypeFilter
#DEFINE ttfAll	0	
#DEFINE ttfARRefundCreditCard	1	
#DEFINE ttfBill	2	
#DEFINE ttfBillPaymentCheck	3	
#DEFINE ttfBillPaymentCreditCard	4	
#DEFINE ttfBuildAssembly	5	
#DEFINE ttfCharge	6	
#DEFINE ttfCheck	7	
#DEFINE ttfCreditCardCharge	8	
#DEFINE ttfCreditCardCredit	9	
#DEFINE ttfCreditMemo	10	
#DEFINE ttfDeposit	11	
#DEFINE ttfEstimate	12	
#DEFINE ttfInventoryAdjustment	13	
#DEFINE ttfInvoice	14	
#DEFINE ttfItemReceipt	15	
#DEFINE ttfJournalEntry	16	
#DEFINE ttfLiabilityAdjustment	17	
#DEFINE ttfPaycheck	18	
#DEFINE ttfPayrollLiabilityCheck	19	
#DEFINE ttfPurchaseOrder	20	
#DEFINE ttfReceivePayment	21	
#DEFINE ttfSalesOrder	22	
#DEFINE ttfSalesReceipt	23	
#DEFINE ttfSalesTaxPaymentCheck	24	
#DEFINE ttfTransfer	25	
#DEFINE ttfVendorCredit	26	
#DEFINE ttfYTDAdjustment	27	

*--- Constant Group: ENdataType
#DEFINE dtIDTYPE	0	
#DEFINE dtGUIDTYPE	1	
#DEFINE dtSTRTYPE	2	
#DEFINE dtBOOLTYPE	3	
#DEFINE dtDATETYPE	4	
#DEFINE dtDATETIMETYPE	5	
#DEFINE dtTIMEINTERVALTYPE	6	
#DEFINE dtAMTTYPE	7	
#DEFINE dtPRICETYPE	8	
#DEFINE dtQUANTYPE	9	
#DEFINE dtPERCENTTYPE	10	
#DEFINE dtENUMTYPE	11	
#DEFINE dtINTTYPE	12	

*--- Constant Group: ENClearedStatus
#DEFINE csCleared	0	
#DEFINE csNotCleared	1	
#DEFINE csPending	2	

*--- Constant Group: ENIsTrackingSerialOrLotNumber
#DEFINE itsolnNone	0	
#DEFINE itsolnSerialNumber	1	
#DEFINE itsolnLotNumber	2	

*--- Constant Group: ENBillableStatus
#DEFINE bsBillable	0	
#DEFINE bsNotBillable	1	
#DEFINE bsHasBeenBilled	2	

*--- Constant Group: ENThousandSeparator
#DEFINE tsComma	0	
#DEFINE tsPeriod	1	
#DEFINE tsSpace	2	
#DEFINE tsApostrophe	3	

*--- Constant Group: ENThousandSeparatorGrouping
#DEFINE tsgXX_XXX_XXX	0	
#DEFINE tsgX_XX_XX_XXX	1	

*--- Constant Group: ENDecimalPlaces
#DEFINE dp0	0	
#DEFINE dp2	1	

*--- Constant Group: ENDecimalSeparator
#DEFINE dsPeriod	0	
#DEFINE dsComma	1	

*--- Constant Group: ENBillingRateType
#DEFINE brtFixedRate	0	
#DEFINE brtPerItem	1	

*--- Constant Group: ENRemoveFromObject
#DEFINE rfoAccount	0	
#DEFINE rfoARRefundCreditCard	1	
#DEFINE rfoBill	2	
#DEFINE rfoBillPaymentCheck	3	
#DEFINE rfoBillPaymentCreditCard	4	
#DEFINE rfoBuildAssembly	5	
#DEFINE rfoCharge	6	
#DEFINE rfoCheck	7	
#DEFINE rfoCompany	8	
#DEFINE rfoCreditCardCharge	9	
#DEFINE rfoCreditCardCredit	10	
#DEFINE rfoCreditMemo	11	
#DEFINE rfoCustomer	12	
#DEFINE rfoDeposit	13	
#DEFINE rfoEmployee	14	
#DEFINE rfoEstimate	15	
#DEFINE rfoInventoryAdjustment	16	
#DEFINE rfoInvoice	17	
#DEFINE rfoItem	18	
#DEFINE rfoItemReceipt	19	
#DEFINE rfoJournalEntry	20	
#DEFINE rfoOtherName	21	
#DEFINE rfoPurchaseOrder	22	
#DEFINE rfoReceivePayment	23	
#DEFINE rfoSalesOrder	24	
#DEFINE rfoSalesReceipt	25	
#DEFINE rfoSalesTaxPaymentCheck	26	
#DEFINE rfoVendor	27	
#DEFINE rfoVendorCredit	28	

*--- Constant Group: ENCalculateChargesFrom
#DEFINE ccfDueDate	0	
#DEFINE ccfInvoiceOrBilledDate	1	

*--- Constant Group: ENEmployeeType
#DEFINE etOfficer	0	
#DEFINE etOwner	1	
#DEFINE etRegular	2	
#DEFINE etStatutory	3	

*--- Constant Group: ENFirstDayOfWeek
#DEFINE fdowMonday	0	
#DEFINE fdowTuesday	1	
#DEFINE fdowWednesday	2	
#DEFINE fdowThursday	3	
#DEFINE fdowFriday	4	
#DEFINE fdowSaturday	5	
#DEFINE fdowSunday	6	

*--- Constant Group: ENDataExtType
#DEFINE detAMTTYPE	0	
#DEFINE detDATETIMETYPE	1	
#DEFINE detINTTYPE	2	
#DEFINE detPERCENTTYPE	3	
#DEFINE detPRICETYPE	4	
#DEFINE detQUANTYPE	5	
#DEFINE detSTR1024TYPE	6	
#DEFINE detSTR255TYPE	7	

*--- Constant Group: ENListEventType
#DEFINE letAccount	0	
#DEFINE letClass	1	
#DEFINE letCustomer	2	
#DEFINE letCustomerMsg	3	
#DEFINE letCustomerType	4	
#DEFINE letDateDrivenTerms	5	
#DEFINE letEmployee	6	
#DEFINE letItemDiscount	7	
#DEFINE letItemFixedAsset	8	
#DEFINE letItemGroup	9	
#DEFINE letItemInventory	10	
#DEFINE letItemInventoryAssembly	11	
#DEFINE letItemNonInventory	12	
#DEFINE letItemOtherCharge	13	
#DEFINE letItemPayment	14	
#DEFINE letItemSalesTax	15	
#DEFINE letItemSalesTaxGroup	16	
#DEFINE letItemService	17	
#DEFINE letItemSubtotal	18	
#DEFINE letJobType	19	
#DEFINE letOtherName	20	
#DEFINE letPaymentMethod	21	
#DEFINE letPriceLevel	22	
#DEFINE letSalesRep	23	
#DEFINE letSalesTaxCode	24	
#DEFINE letShipMethod	25	
#DEFINE letStandardTerms	26	
#DEFINE letToDo	27	
#DEFINE letVendor	28	
#DEFINE letVendorType	29	

*--- Constant Group: ENListEventOperation
#DEFINE leoAdd	0	
#DEFINE leoModify	1	
#DEFINE leoDelete	2	
#DEFINE leoMerge	3	

*--- Constant Group: ENFirstMonthFiscalYear
#DEFINE fmfyJanuary	0	
#DEFINE fmfyFebruary	1	
#DEFINE fmfyMarch	2	
#DEFINE fmfyApril	3	
#DEFINE fmfyMay	4	
#DEFINE fmfyJune	5	
#DEFINE fmfyJuly	6	
#DEFINE fmfyAugust	7	
#DEFINE fmfySeptember	8	
#DEFINE fmfyOctober	9	
#DEFINE fmfyNovember	10	
#DEFINE fmfyDecember	11	

*--- Constant Group: ENFirstMonthIncomeTaxYear
#DEFINE fmityJanuary	0	
#DEFINE fmityFebruary	1	
#DEFINE fmityMarch	2	
#DEFINE fmityApril	3	
#DEFINE fmityMay	4	
#DEFINE fmityJune	5	
#DEFINE fmityJuly	6	
#DEFINE fmityAugust	7	
#DEFINE fmitySeptember	8	
#DEFINE fmityOctober	9	
#DEFINE fmityNovember	10	
#DEFINE fmityDecember	11	

*--- Constant Group: ENTaxForm
#DEFINE tfForm1040	0	
#DEFINE tfForm1065	1	
#DEFINE tfForm1120	2	
#DEFINE tfForm1120S	3	
#DEFINE tfForm990	4	
#DEFINE tfForm990PF	5	
#DEFINE tfForm990T	6	
#DEFINE tfOtherOrNone	7	

*--- Constant Group: ENCompanyFileEventOperation
#DEFINE cfeoClose	0	
#DEFINE cfeoOpen	1	

*--- Constant Group: ENAgingReportBasis
#DEFINE arbAgeFromDueDate	0	
#DEFINE arbAgeFromTransactionDate	1	

*--- Constant Group: ENSummaryReportBasis
#DEFINE srbAccrual	0	
#DEFINE srbCash	1	

*--- Constant Group: ENGender
#DEFINE gMale	0	
#DEFINE gFemale	1	

*--- Constant Group: ENReportingPeriod
#DEFINE rpMonthly	0	
#DEFINE rpQuarterly	1	

*--- Constant Group: ENWageType
#DEFINE wtHourly	0	
#DEFINE wtSalary	1	
#DEFINE wtBonus	2	
#DEFINE wtCommission	3	
#DEFINE wtHourlyOvertime	4	
#DEFINE wtHourlyRegular	5	
#DEFINE wtHourlySick	6	
#DEFINE wtHourlyVacation	7	
#DEFINE wtSalaryRegular	8	
#DEFINE wtSalarySick	9	
#DEFINE wtSalaryVacation	10	

*--- Constant Group: ENLinkType
#DEFINE ltAMTTYPE	0	
#DEFINE ltQUANTYPE	1	

*--- Constant Group: ENTemplateType
#DEFINE tttBuildAssembly	0	
#DEFINE tttCreditMemo	1	
#DEFINE tttEstimate	2	
#DEFINE tttInvoice	3	
#DEFINE tttPurchaseOrder	4	
#DEFINE tttSalesOrder	5	
#DEFINE tttSalesReceipt	6	

*--- Constant Group: ENOperator
#DEFINE oLessThan	0	
#DEFINE oLessThanEqual	1	
#DEFINE oEqual	2	
#DEFINE oGreaterThan	3	
#DEFINE oGreaterThanEqual	4	

*--- Constant Group: ENUnitOfMeasureType
#DEFINE uomtArea	0	
#DEFINE uomtCount	1	
#DEFINE uomtLength	2	
#DEFINE uomtOther	3	
#DEFINE uomtTime	4	
#DEFINE uomtVolume	5	
#DEFINE uomtWeight	6	

*--- Constant Group: ENVisibleIf
#DEFINE viAccountantCopyExists	0	
#DEFINE viAssemblyItemsEnabled	1	
#DEFINE viClassesEnabled	2	
#DEFINE viEstimatesEnabled	3	
#DEFINE viHasCustomers	4	
#DEFINE viHasVendors	5	
#DEFINE viInventoryEnabled	6	
#DEFINE viIsAccountantCopy	7	
#DEFINE viMultiUserMode	8	
#DEFINE viPayrollEnabled	9	
#DEFINE viPriceLevelsEnabled	10	
#DEFINE viSalesOrdersEnabled	11	
#DEFINE viSalesTaxEnabled	12	
#DEFINE viTimeTrackingEnabled	13	

*--- Constant Group: ENVisibleIfNot
#DEFINE vinAccountantCopyExists	0	
#DEFINE vinAssemblyItemsEnabled	1	
#DEFINE vinClassesEnabled	2	
#DEFINE vinEstimatesEnabled	3	
#DEFINE vinHasCustomers	4	
#DEFINE vinHasVendors	5	
#DEFINE vinInventoryEnabled	6	
#DEFINE vinIsAccountantCopy	7	
#DEFINE vinMultiUserMode	8	
#DEFINE vinPayrollEnabled	9	
#DEFINE vinPriceLevelsEnabled	10	
#DEFINE vinSalesOrdersEnabled	11	
#DEFINE vinSalesTaxEnabled	12	
#DEFINE vinTimeTrackingEnabled	13	

*--- Constant Group: ENEnabledIf
#DEFINE eiAccountantCopyExists	0	
#DEFINE eiAssemblyItemsEnabled	1	
#DEFINE eiClassesEnabled	2	
#DEFINE eiEstimatesEnabled	3	
#DEFINE eiHasCustomers	4	
#DEFINE eiHasVendors	5	
#DEFINE eiInventoryEnabled	6	
#DEFINE eiIsAccountantCopy	7	
#DEFINE eiMultiUserMode	8	
#DEFINE eiPayrollEnabled	9	
#DEFINE eiPriceLevelsEnabled	10	
#DEFINE eiSalesOrdersEnabled	11	
#DEFINE eiSalesTaxEnabled	12	
#DEFINE eiTimeTrackingEnabled	13	

*--- Constant Group: ENEnabledIfNot
#DEFINE einAccountantCopyExists	0	
#DEFINE einAssemblyItemsEnabled	1	
#DEFINE einClassesEnabled	2	
#DEFINE einEstimatesEnabled	3	
#DEFINE einHasCustomers	4	
#DEFINE einHasVendors	5	
#DEFINE einInventoryEnabled	6	
#DEFINE einIsAccountantCopy	7	
#DEFINE einMultiUserMode	8	
#DEFINE einPayrollEnabled	9	
#DEFINE einPriceLevelsEnabled	10	
#DEFINE einSalesOrdersEnabled	11	
#DEFINE einSalesTaxEnabled	12	
#DEFINE einTimeTrackingEnabled	13	

*--- Constant Group: ENNonWageType
#DEFINE nwtAddition	0	
#DEFINE nwtCompanyContribution	1	
#DEFINE nwtDeduction	2	
#DEFINE nwtDirectDeposit	3	
#DEFINE nwtTax	4	

*--- Constant Group: ENAccrualPeriod
#DEFINE apBeginningOfYear	0	
#DEFINE apEveryHourOnPaycheck	1	
#DEFINE apEveryPaycheck	2	

*--- Constant Group: ENAcquiredAs
#DEFINE aaNew	0	
#DEFINE aaOld	1	

*--- Constant Group: ENTransactionMode
#DEFINE tmCardNotPresent	0	
#DEFINE tmCardPresent	1	

*--- Constant Group: ENCreditCardTxnType
#DEFINE ccttAuthorization	0	
#DEFINE ccttCapture	1	
#DEFINE ccttCharge	2	
#DEFINE ccttRefund	3	
#DEFINE ccttVoiceAuthorization	4	

*--- Constant Group: ENDeliveryPolicy
#DEFINE dpDeliverAlways	0	
#DEFINE dpDeliverOnlyIfRunning	1	

*--- Constant Group: ENTrackLostEvents
#DEFINE tleAll	0	
#DEFINE tleNone	1	

*--- Constant Group: ENJournalLineType
#DEFINE jltDebit	0	
#DEFINE jltCredit	1	

*--- Constant Group: ENLineType
#DEFINE ltECPurchases	0	
#DEFINE ltECSales	1	
#DEFINE ltPurchases	2	
#DEFINE ltSales	3	
#DEFINE ltSubTotal	4	
#DEFINE ltTaxOnPurchases	5	
#DEFINE ltTaxOnSales	6	
#DEFINE ltTotal	7	

*--- Constant Group: ENAssignClassesTo
#DEFINE actNone	0	
#DEFINE actAccounts	1	
#DEFINE actItems	2	
#DEFINE actNames	3	

*--- Constant Group: ENServiceStatus
#DEFINE ssActive	0	
#DEFINE ssExpired	1	
#DEFINE ssNever	2	
#DEFINE ssPending	3	
#DEFINE ssSuspended	4	
#DEFINE ssTerminated	5	
#DEFINE ssTrial	6	

*--- Constant Group: ENrowType
#DEFINE rtaccount	0	
#DEFINE rtclass	1	
#DEFINE rtcustomer	2	
#DEFINE rtcustomerMessage	3	
#DEFINE rtcustomerType	4	
#DEFINE rtemployee	5	
#DEFINE rtitem	6	
#DEFINE rtjobType	7	
#DEFINE rtlabel	8	
#DEFINE rtmemorizedTxn	9	
#DEFINE rtmemorizedReport	10	
#DEFINE rtname	11	
#DEFINE rtotherName	12	
#DEFINE rtpaymentMethod	13	
#DEFINE rtpayrollItem	14	
#DEFINE rtsalesRep	15	
#DEFINE rtsalesTaxCode	16	
#DEFINE rtshipMethod	17	
#DEFINE rtstate	18	
#DEFINE rtstyle	19	
#DEFINE rtterms	20	
#DEFINE rttoDo	21	
#DEFINE rtvendor	22	
#DEFINE rtvendorType	23	

*--- Constant Group: ENAddToMenu
#DEFINE atmFile	0	
#DEFINE atmCompany	1	
#DEFINE atmCustomers	2	
#DEFINE atmVendors	3	
#DEFINE atmEmployees	4	
#DEFINE atmBanking	5	

*--- Constant Group: ENQBFileMode
#DEFINE qbfmMultiUser	0	
#DEFINE qbfmSingleUser	1	

*--- Constant Group: ENPaySalesTax
#DEFINE pstMonthly	0	
#DEFINE pstQuarterly	1	
#DEFINE pstAnnually	2	

*--- Constant Group: ENColType
#DEFINE ctAccount	0	
#DEFINE ctAddr1	1	
#DEFINE ctAddr2	2	
#DEFINE ctAddr3	3	
#DEFINE ctAddr4	4	
#DEFINE ctAddr5	5	
#DEFINE ctAging	6	
#DEFINE ctAmount	7	
#DEFINE ctAmountDifference	8	
#DEFINE ctAverageCost	9	
#DEFINE ctBilledDate	10	
#DEFINE ctBillingStatus	11	
#DEFINE ctBlank	12	
#DEFINE ctCalculatedAmount	13	
#DEFINE ctClass	14	
#DEFINE ctClearedStatus	15	
#DEFINE ctCostPrice	16	
#DEFINE ctCreateDate	17	
#DEFINE ctCredit	18	
#DEFINE ctCustomField	19	
#DEFINE ctDate	20	
#DEFINE ctDebit	21	
#DEFINE ctDeliveryDate	22	
#DEFINE ctDueDate	23	
#DEFINE ctDuration	24	
#DEFINE ctEarliestReceiptDate	25	
#DEFINE ctEstimateActive	26	
#DEFINE ctFOB	27	
#DEFINE ctIncomeSubjectToTax	28	
#DEFINE ctInvoiced	29	
#DEFINE ctIsAdjustment	30	
#DEFINE ctItem	31	
#DEFINE ctItemDesc	32	
#DEFINE ctItemVendor	33	
#DEFINE ctLabel	34	
#DEFINE ctLastModifiedBy	35	
#DEFINE ctLatestOrPriorState	36	
#DEFINE ctMemo	37	
#DEFINE ctModifiedTime	38	
#DEFINE ctName	39	
#DEFINE ctNameAccountNumber	40	
#DEFINE ctNameAddress	41	
#DEFINE ctNameCity	42	
#DEFINE ctNameContact	43	
#DEFINE ctNameEmail	44	
#DEFINE ctNameFax	45	
#DEFINE ctNamePhone	46	
#DEFINE ctNameState	47	
#DEFINE ctNameZip	48	
#DEFINE ctOpenBalance	49	
#DEFINE ctOriginalAmount	50	
#DEFINE ctPaidAmount	51	
#DEFINE ctPaidStatus	52	
#DEFINE ctPaidThroughDate	53	
#DEFINE ctPaymentMethod	54	
#DEFINE ctPayrollItem	55	
#DEFINE ctPercent	56	
#DEFINE ctPercentChange	57	
#DEFINE ctPercentOfTotalRetail	58	
#DEFINE ctPercentOfTotalValue	59	
#DEFINE ctPhysicalCount	60	
#DEFINE ctPONumber	61	
#DEFINE ctPrintStatus	62	
#DEFINE ctProgressAmount	63	
#DEFINE ctProgressPercent	64	
#DEFINE ctQuantity	65	
#DEFINE ctQuantityAvailable	66	
#DEFINE ctQuantityOnHand	67	
#DEFINE ctQuantityOnOrder	68	
#DEFINE ctQuantityOnPendingBuild	69	
#DEFINE ctQuantityOnSalesOrder	70	
#DEFINE ctReceivedQuantity	71	
#DEFINE ctRefNumber	72	
#DEFINE ctReorderPoint	73	
#DEFINE ctRetailValueOnHand	74	
#DEFINE ctRunningBalance	75	
#DEFINE ctSalesPerWeek	76	
#DEFINE ctSalesRep	77	
#DEFINE ctSalesTaxCode	78	
#DEFINE ctShipDate	79	
#DEFINE ctShipMethod	80	
#DEFINE ctShipToAddr1	81	
#DEFINE ctShipToAddr2	82	
#DEFINE ctShipToAddr3	83	
#DEFINE ctShipToAddr4	84	
#DEFINE ctShipToAddr5	85	
#DEFINE ctSONumber	86	
#DEFINE ctSourceName	87	
#DEFINE ctSplitAccount	88	
#DEFINE ctSSNOrTaxID	89	
#DEFINE ctSuggestedReorder	90	
#DEFINE ctTaxLine	91	
#DEFINE ctTaxTableVersion	92	
#DEFINE ctTerms	93	
#DEFINE ctTotal	94	
#DEFINE ctTxnID	95	
#DEFINE ctTxnNumber	96	
#DEFINE ctTxnType	97	
#DEFINE ctUnitPrice	98	
#DEFINE ctUserEdit	99	
#DEFINE ctValueOnHand	100	
#DEFINE ctWageBase	101	
#DEFINE ctWageBaseTips	102	

*--- Constant Group: ENMatchCriterion
#DEFINE mcStartsWith	0	
#DEFINE mcContains	1	
#DEFINE mcEndsWith	2	

*--- Constant Group: ENTxnEventType
#DEFINE tetARRefundCreditCard	0	
#DEFINE tetBill	1	
#DEFINE tetBillPaymentCheck	2	
#DEFINE tetBillPaymentCreditCard	3	
#DEFINE tetCharge	4	
#DEFINE tetCheck	5	
#DEFINE tetCreditCardCharge	6	
#DEFINE tetCreditCardCredit	7	
#DEFINE tetCreditMemo	8	
#DEFINE tetDeposit	9	
#DEFINE tetEstimate	10	
#DEFINE tetInventoryAdjustment	11	
#DEFINE tetInvoice	12	
#DEFINE tetItemReceipt	13	
#DEFINE tetJournalEntry	14	
#DEFINE tetPurchaseOrder	15	
#DEFINE tetReceivePayment	16	
#DEFINE tetSalesOrder	17	
#DEFINE tetSalesReceipt	18	
#DEFINE tetSalesTaxPaymentCheck	19	
#DEFINE tetTimeTracking	20	
#DEFINE tetVendorCredit	21	

*--- Constant Group: ENTxnEventOperation
#DEFINE teoAdd	0	
#DEFINE teoModify	1	
#DEFINE teoDelete	2	

*--- Constant Group: ENObjectType
#DEFINE otNA	-1	
#DEFINE otGUIDList	100	
#DEFINE otBSTRList	101	
#DEFINE otQBBaseRef	103	
#DEFINE otQBBaseRefList	104	
#DEFINE otARRefundCreditCardFilter	10000	
#DEFINE otORARRefundCreditCardQuery	10001	
#DEFINE otForm1099CategoryAccountMappingMod	10002	
#DEFINE otCurrencyFilter	10003	
#DEFINE otForm1099CategoryAccountMappingRet	10004	
#DEFINE otMappingAccount	10005	
#DEFINE otCategoryAccountMapping	10006	
#DEFINE otPayrollLastPeriodRet	10007	
#DEFINE otCurrencyFormat	10008	
#DEFINE otCategoryAccountMappingMod	10009	
#DEFINE otMultiCurrencyPreferences	10010	
#DEFINE otSalesTaxReturnRet	10011	
#DEFINE otVendorCreditMod	10012	
#DEFINE otAccountantCopy	10013	
#DEFINE otMappingAccountList	10014	
#DEFINE otSalesTaxReturnRetList	10015	
#DEFINE otCategoryAccountMappingModList	10016	
#DEFINE otSalesTaxReturnLineRetList	10017	
#DEFINE otCategoryAccountMappingList	10018	
#DEFINE otInventorySiteFilter	10019	
#DEFINE otORInventorySiteQuery	10020	
#DEFINE otInventorySiteQuery	10021	
#DEFINE otSalesTaxPayableQuery	10022	
#DEFINE otORValueAdjustment	10023	
#DEFINE otTxnFilterNoCurrency	10024	
#DEFINE otORTransferInventoryQuery	10025	
#DEFINE otTransferInventoryQuery	10026	
#DEFINE otTransferInventoryMod	10027	
#DEFINE otSalesTaxPaymentCheckLineAdd	10028	
#DEFINE otSiteAddress	10029	
#DEFINE otInventorySiteMod	10030	
#DEFINE otTransferInventoryRet	10031	
#DEFINE otInventorySiteRet	10032	
#DEFINE otTransferInventoryLineMod	10033	
#DEFINE otSalesTaxPayableRet	10034	
#DEFINE otTransferInventoryLineRet	10035	
#DEFINE otSalesTaxPaymentCheckAdd	10036	
#DEFINE otSalesTaxPayableLineRet	10037	
#DEFINE otInventoryAdjustmentLineMod	10038	
#DEFINE otSalesTaxPaymentCheckMod	10039	
#DEFINE otInventoryAdjustmentMod	10040	
#DEFINE otTransferInventoryAdd	10041	
#DEFINE otInventorySiteAdd	10042	
#DEFINE otTransferInventoryLineAdd	10043	
#DEFINE otSalesTaxPaymentCheckLineAddList	10044	
#DEFINE otSalesTaxPayableLineRetList	10045	
#DEFINE otSalesTaxPayableRetList	10046	
#DEFINE otTransferInventoryLineModList	10047	
#DEFINE otTransferInventoryRetList	10048	
#DEFINE otTransferInventoryLineAddList	10049	
#DEFINE otTransferInventoryLineRetList	10050	
#DEFINE otInventoryAdjustmentLineModList	10051	
#DEFINE otInventorySiteRetList	10052	
#DEFINE otORInventorySiteORShipToEntity	10053	
#DEFINE otMultiLocationInventoryPreferences	10054	
#DEFINE otORSiteFilter	10055	
#DEFINE otORItemSitesFilter	10056	
#DEFINE otItemSitesFilter	10057	
#DEFINE otORItemSitesQuery	10058	
#DEFINE otItemSitesQuery	10059	
#DEFINE otORItemAssemblyORInventory	10060	
#DEFINE otItemSitesRet	10061	
#DEFINE otSiteFilter	10062	
#DEFINE otItemSiteFilter	10063	
#DEFINE otItemSitesRetList	10064	
#DEFINE otItemsAndInventoryPreferences	10066	
#DEFINE otLotNumberAdjustment	10069	
#DEFINE otSerialNumberAdjustment	10070	
#DEFINE otORSerialLotNumber	10071	
#DEFINE otORSerialNumberAdjustment	10072	
#DEFINE otSerialNumberRet	10073	
#DEFINE otORSerialLotNumberPreference	10074	
#DEFINE otLotAdjustment	10076	
#DEFINE otORTypeAdjustmentMod	10077	
#DEFINE otORListOwnerTxn	10078	
#DEFINE otErrorRecovery	10079	
#DEFINE otORClassFilter	10081	
#DEFINE otListWithClassFilter	10082	
#DEFINE otORListQueryWithOwnerIDAndClass	10083	
#DEFINE otBarCodeQuery	10084	
#DEFINE otTransferTxnFilter	10085	
#DEFINE otORTransferTxnQuery	10086	
#DEFINE otTransferQuery	10087	
#DEFINE otBarCode	10088	
#DEFINE otContactsMod	10089	
#DEFINE otContactsRet	10090	
#DEFINE otTransferAdd	10091	
#DEFINE otTransferMod	10092	
#DEFINE otAdditionalNotes	10093	
#DEFINE otTransferRet	10094	
#DEFINE otContacts	10095	
#DEFINE otClassFilter	10096	
#DEFINE otBarCodeRet	10097	
#DEFINE otAdditionalNotesMod	10098	
#DEFINE otAdditionalNotesRet	10099	
#DEFINE otShipToAddress	10100	
#DEFINE otTransferRetList	10101	
#DEFINE otContactsModList	10102	
#DEFINE otShipToAddressList	10103	
#DEFINE otContactsRetList	10104	
#DEFINE otAdditionalNotesModList	10105	
#DEFINE otContactsList	10106	
#DEFINE otBarCodeRetList	10107	
#DEFINE otAdditionalNotesRetList	10108	
#DEFINE otAdditionalNotesList	10109	
#DEFINE otENAccountTypeList	102	
#DEFINE otORPurchaseOrderLineRet	111	
#DEFINE otORCreditMemoLineAdd	112	
#DEFINE otORDateRangeFilter	113	
#DEFINE otORTimeTrackingTxnQuery	114	
#DEFINE otORNameFilter	115	
#DEFINE otORPurchaseOrderLineAdd	116	
#DEFINE otORAccountFilter	117	
#DEFINE otORDiscountRate	118	
#DEFINE otORTermsRet	119	
#DEFINE otORRate	120	
#DEFINE otORRefNumberFilter	121	
#DEFINE otORItemLineRet	122	
#DEFINE otORSalesPurchase	123	
#DEFINE otORToDoListQuery	124	
#DEFINE otORAccountListQuery	125	
#DEFINE otOREntityRet	126	
#DEFINE otORSalesPurchaseMod	127	
#DEFINE otORListQuery	128	
#DEFINE otORVendorListQuery	129	
#DEFINE otORSalesReceiptLineRet	130	
#DEFINE otORCustomerListQuery	131	
#DEFINE otORItemLineAdd	132	
#DEFINE otORMarkupRate	133	
#DEFINE otOREstimateLineRet	134	
#DEFINE otORInvoiceQuery	135	
#DEFINE otORTxnQuery	136	
#DEFINE otORInvoiceLineRet	137	
#DEFINE otORPrice	138	
#DEFINE otORTimeTrackingEntityFilter	140	
#DEFINE otORApplyPayment	141	
#DEFINE otORBillQuery	142	
#DEFINE otORTxnDateRangeFilter	143	
#DEFINE otORSalesReceiptLineAdd	144	
#DEFINE otOREntityFilter	145	
#DEFINE otORCreditMemoLineRet	146	
#DEFINE otOREstimateLineAdd	147	
#DEFINE otORItemRet	148	
#DEFINE otORInvoiceLineAdd	149	
#DEFINE otTxnVoid	150	
#DEFINE otInvoiceFilter	151	
#DEFINE otAccountListFilter	152	
#DEFINE otReceivePaymentQuery	153	
#DEFINE otListDelRet	154	
#DEFINE otSalesReceiptQuery	155	
#DEFINE otCreditCardChargeQuery	156	
#DEFINE otCreditMemoQuery	157	
#DEFINE otVendorListFilter	158	
#DEFINE otCustomerListFilter	159	
#DEFINE otPurchaseOrderQuery	161	
#DEFINE otTxnFilter	162	
#DEFINE otChargeQuery	163	
#DEFINE otInvoiceQuery	164	
#DEFINE otCreditCardCreditQuery	165	
#DEFINE otVendorCreditQuery	166	
#DEFINE otJournalEntryQuery	167	
#DEFINE otListDel	168	
#DEFINE otBillFilter	169	
#DEFINE otListFilter	170	
#DEFINE otTxnDateFilter	171	
#DEFINE otCheckQuery	172	
#DEFINE otTimeTrackingTxnFilter	173	
#DEFINE otTxnVoidRet	174	
#DEFINE otTxnDelRet	175	
#DEFINE otTxnDel	176	
#DEFINE otToDoListFilter	177	
#DEFINE otBillQuery	178	
#DEFINE otEstimateQuery	179	
#DEFINE otEstimateLineRet	180	
#DEFINE otSalesAndCustomersPreferences	181	
#DEFINE otItemSalesTaxMod	182	
#DEFINE otDateDrivenTermsAdd	183	
#DEFINE otPreferencesRet	185	
#DEFINE otOtherNameAdd	186	
#DEFINE otSalesReceiptLineAdd	187	
#DEFINE otAccountRet	188	
#DEFINE otPaymentMethodAdd	189	
#DEFINE otSalesReceiptRet	190	
#DEFINE otCustomerMsgAdd	191	
#DEFINE otItemNonInventoryRet	192	
#DEFINE otVendorRet	193	
#DEFINE otCreditCardCreditAdd	194	
#DEFINE otSalesTaxPreferences	195	
#DEFINE otTimeTrackingPreferences	196	
#DEFINE otJournalDebitLine	197	
#DEFINE otCreditCardChargeRet	198	
#DEFINE otInvoiceLineGroupAdd	199	
#DEFINE otBillRet	200	
#DEFINE otJournalEntryRet	201	
#DEFINE otAccountMod	202	
#DEFINE otItemNonInventoryMod	203	
#DEFINE otReceivePaymentRet	204	
#DEFINE otPurchaseOrderLineGroupAdd	205	
#DEFINE otVendorMod	206	
#DEFINE otTimeTrackingAdd	207	
#DEFINE otChargeRet	208	
#DEFINE otEmployeeRet	209	
#DEFINE otItemSalesTaxAdd	210	
#DEFINE otSalesRepRet	211	
#DEFINE otEstimateAdd	212	
#DEFINE otCreditMemoRet	213	
#DEFINE otCreditMemoLineRet	214	
#DEFINE otItemGroupRet	215	
#DEFINE otItemSalesTaxGroupRet	216	
#DEFINE otItemOtherChargeRet	217	
#DEFINE otStandardTermsRet	218	
#DEFINE otAccountFilter	219	
#DEFINE otRefNumberFilter	220	
#DEFINE otInvoiceLineAdd	221	
#DEFINE otVendorCreditAdd	222	
#DEFINE otCustomerRet	223	
#DEFINE otEstimateLineAdd	224	
#DEFINE otEmployeeMod	225	
#DEFINE otSalesRepMod	226	
#DEFINE otModifiedDateRangeFilter	227	
#DEFINE otCompanyRet	228	
#DEFINE otItemGroupMod	229	
#DEFINE otItemSalesTaxGroupMod	230	
#DEFINE otItemOtherChargeMod	231	
#DEFINE otAccountAdd	233	
#DEFINE otSalesReceiptAdd	234	
#DEFINE otCustomerMod	235	
#DEFINE otSalesTaxCodeRet	236	
#DEFINE otSalesOrPurchaseMod	237	
#DEFINE otItemNonInventoryAdd	238	
#DEFINE otVendorAdd	239	
#DEFINE otSalesAndPurchaseMod	240	
#DEFINE otCreditCardChargeAdd	241	
#DEFINE otExpenseLineRet	242	
#DEFINE otItemSubtotalRet	243	
#DEFINE otEstimateLineGroupRet	244	
#DEFINE otBillAdd	245	
#DEFINE otCustomerTypeRet	246	
#DEFINE otItemServiceRet	247	
#DEFINE otItemDiscountRet	248	
#DEFINE otJournalEntryAdd	249	
#DEFINE otSalesReceiptLineGroupRet	250	
#DEFINE otPurchasesAndVendorsPreferences	251	
#DEFINE otSalesTaxCodeMod	253	
#DEFINE otPurchaseOrderLineRet	254	
#DEFINE otReceivePaymentAdd	255	
#DEFINE otAccountingPreferences	256	
#DEFINE otEmployeeAdd	257	
#DEFINE otChargeAdd	258	
#DEFINE otItemSubtotalMod	259	
#DEFINE otSalesRepAdd	260	
#DEFINE otAppliedToTxnRet	261	
#DEFINE otJobTypeRet	262	
#DEFINE otCreditMemoAdd	263	
#DEFINE otItemPaymentRet	264	
#DEFINE otCreditMemoLineAdd	266	
#DEFINE otItemGroupAdd	267	
#DEFINE otItemSalesTaxGroupAdd	268	
#DEFINE otItemServiceMod	269	
#DEFINE otInvoiceRet	270	
#DEFINE otItemDiscountMod	271	
#DEFINE otItemOtherChargeAdd	272	
#DEFINE otShipMethodRet	273	
#DEFINE otJournalCreditLine	274	
#DEFINE otStandardTermsAdd	275	
#DEFINE otVendorTypeRet	276	
#DEFINE otCustomerAdd	277	
#DEFINE otItemLineRet	278	
#DEFINE otClassRet	280	
#DEFINE otTxnLineDetail	281	
#DEFINE otSalesAndPurchase	282	
#DEFINE otJobsAndEstimatesPreferences	283	
#DEFINE otNameRangeFilter	285	
#DEFINE otItemPaymentMod	286	
#DEFINE otFinanceChargePreferences	287	
#DEFINE otTotalBalanceFilter	289	
#DEFINE otSalesTaxCodeAdd	291	
#DEFINE otTxnDateRangeFilter	293	
#DEFINE otRefNumberRangeFilter	294	
#DEFINE otClassMod	295	
#DEFINE otSalesOrPurchase	296	
#DEFINE otExpenseLineAdd	297	
#DEFINE otItemSubtotalAdd	298	
#DEFINE otEstimateLineGroupAdd	299	
#DEFINE otCustomerTypeAdd	300	
#DEFINE otItemServiceAdd	301	
#DEFINE otToDoRet	302	
#DEFINE otItemDiscountAdd	303	
#DEFINE otSalesReceiptLineGroupAdd	304	
#DEFINE otPurchaseOrderLineAdd	306	
#DEFINE otEntityFilter	307	
#DEFINE otPurchaseOrderRet	308	
#DEFINE otItemInventoryRet	309	
#DEFINE otJobTypeAdd	310	
#DEFINE otAppliedToTxnAdd	311	
#DEFINE otCheckRet	312	
#DEFINE otItemPaymentAdd	313	
#DEFINE otCreditMemoLineGroupRet	314	
#DEFINE otItemGroupLineRet	315	
#DEFINE otItemGroupLine	316	
#DEFINE otInvoiceAdd	317	
#DEFINE otToDoMod	318	
#DEFINE otShipMethodAdd	319	
#DEFINE otVendorTypeAdd	320	
#DEFINE otReportsPreferences	321	
#DEFINE otItemLineAdd	322	
#DEFINE otDateDrivenTermsRet	324	
#DEFINE otNameFilter	325	
#DEFINE otOtherNameRet	326	
#DEFINE otPayrollItemWageRet	327	
#DEFINE otClassAdd	328	
#DEFINE otItemInventoryMod	330	
#DEFINE otSalesReceiptLineRet	331	
#DEFINE otPaymentMethodRet	332	
#DEFINE otCustomerMsgRet	333	
#DEFINE otTimeTrackingEntityFilter	334	
#DEFINE otCreditCardCreditRet	335	
#DEFINE otInvoiceLineGroupRet	336	
#DEFINE otOtherNameMod	338	
#DEFINE otLinkedTxn	340	
#DEFINE otToDoAdd	341	
#DEFINE otPurchaseOrderLineGroupRet	343	
#DEFINE otTimeTrackingRet	344	
#DEFINE otItemSalesTaxRet	345	
#DEFINE otPurchaseOrderAdd	346	
#DEFINE otEstimateRet	347	
#DEFINE otSetCredit	348	
#DEFINE otAddress	349	
#DEFINE otItemInventoryAdd	350	
#DEFINE otInvoiceLineRet	351	
#DEFINE otCheckAdd	352	
#DEFINE otHostRet	353	
#DEFINE otCreditMemoLineGroupAdd	354	
#DEFINE otVendorCreditRet	355	
#DEFINE otItemGroupLineAdd	356	
#DEFINE otTermsQuery	357	
#DEFINE otOtherNameQuery	358	
#DEFINE otItemNonInventoryQuery	359	
#DEFINE otCustomerQuery	360	
#DEFINE otClassQuery	361	
#DEFINE otItemInventoryQuery	362	
#DEFINE otItemServiceQuery	363	
#DEFINE otPaymentMethodQuery	364	
#DEFINE otJobTypeQuery	365	
#DEFINE otTimeTrackingQuery	366	
#DEFINE otItemGroupQuery	367	
#DEFINE otSalesTaxCodeQuery	368	
#DEFINE otEmployeeQuery	369	
#DEFINE otDateDrivenTermsQuery	370	
#DEFINE otCustomerTypeQuery	371	
#DEFINE otVendorTypeQuery	372	
#DEFINE otCustomerMsgQuery	373	
#DEFINE otItemOtherChargeQuery	374	
#DEFINE otSalesRepQuery	375	
#DEFINE otItemSalesTaxGroupQuery	376	
#DEFINE otPayrollItemWageQuery	377	
#DEFINE otItemSubtotalQuery	378	
#DEFINE otAccountQuery	379	
#DEFINE otEntityQuery	380	
#DEFINE otItemDiscountQuery	381	
#DEFINE otItemQuery	382	
#DEFINE otItemPaymentQuery	383	
#DEFINE otToDoQuery	384	
#DEFINE otShipMethodQuery	385	
#DEFINE otStandardTermsQuery	386	
#DEFINE otVendorQuery	387	
#DEFINE otItemSalesTaxQuery	388	
#DEFINE otToDoRetList	389	
#DEFINE otVendorCreditRetList	390	
#DEFINE otExpenseLineAddList	391	
#DEFINE otItemPaymentRetList	392	
#DEFINE otTxnLineDetailList	393	
#DEFINE otJobTypeRetList	394	
#DEFINE otAccountRetList	395	
#DEFINE otItemSalesTaxRetList	396	
#DEFINE otSetCreditList	397	
#DEFINE otPayrollItemWageRetList	398	
#DEFINE otCustomerMsgRetList	399	
#DEFINE otAppliedToTxnRetList	400	
#DEFINE otChargeRetList	401	
#DEFINE otORSalesReceiptLineAddList	402	
#DEFINE otPurchaseOrderLineRetList	403	
#DEFINE otItemSubtotalRetList	405	
#DEFINE otReceivePaymentRetList	406	
#DEFINE otPaymentMethodRetList	407	
#DEFINE otItemNonInventoryRetList	408	
#DEFINE otSalesReceiptLineRetList	409	
#DEFINE otORPurchaseOrderLineRetList	410	
#DEFINE otVendorRetList	411	
#DEFINE otLinkedTxnList	412	
#DEFINE otStandardTermsRetList	413	
#DEFINE otInvoiceLineRetList	414	
#DEFINE otItemSalesTaxGroupRetList	416	
#DEFINE otAppliedToTxnAddList	417	
#DEFINE otBillRetList	418	
#DEFINE otItemLineRetList	419	
#DEFINE otORTermsRetList	420	
#DEFINE otCreditCardChargeRetList	421	
#DEFINE otORCreditMemoLineRetList	422	
#DEFINE otEmployeeRetList	423	
#DEFINE otCustomerTypeRetList	424	
#DEFINE otSalesRepRetList	425	
#DEFINE otORPurchaseOrderLineAddList	426	
#DEFINE otOtherNameRetList	427	
#DEFINE otSalesTaxCodeRetList	428	
#DEFINE otCustomerRetList	429	
#DEFINE otORItemRetList	430	
#DEFINE otOREntityRetList	432	
#DEFINE otItemGroupRetList	433	
#DEFINE otORCreditMemoLineAddList	434	
#DEFINE otVendorTypeRetList	436	
#DEFINE otOREstimateLineRetList	438	
#DEFINE otJournalEntryRetList	439	
#DEFINE otEstimateLineRetList	440	
#DEFINE otORItemLineRetList	441	
#DEFINE otCreditMemoLineRetList	442	
#DEFINE otORInvoiceLineRetList	443	
#DEFINE otShipMethodRetList	444	
#DEFINE otClassRetList	445	
#DEFINE otItemDiscountRetList	446	
#DEFINE otItemInventoryRetList	447	
#DEFINE otPurchaseOrderRetList	448	
#DEFINE otSalesReceiptRetList	449	
#DEFINE otCreditCardCreditRetList	450	
#DEFINE otExpenseLineRetList	451	
#DEFINE otEstimateRetList	452	
#DEFINE otItemServiceRetList	453	
#DEFINE otDateDrivenTermsRetList	454	
#DEFINE otItemGroupLineList	456	
#DEFINE otOREstimateLineAddList	457	
#DEFINE otTimeTrackingRetList	458	
#DEFINE otORItemLineAddList	459	
#DEFINE otCreditMemoRetList	460	
#DEFINE otCheckRetList	461	
#DEFINE otItemOtherChargeRetList	462	
#DEFINE otORSalesReceiptLineRetList	463	
#DEFINE otInvoiceRetList	464	
#DEFINE otORInvoiceLineAddList	465	
#DEFINE otORReportPeriod	466	
#DEFINE otORInventoryAdjustmentQuery	467	
#DEFINE otORDepositQuery	468	
#DEFINE otORReportAccountFilter	469	
#DEFINE otORSalesTaxPaymentCheckQuery	470	
#DEFINE otORReportItemFilter	471	
#DEFINE otORReportData	472	
#DEFINE otORDataExtDefQuery	473	
#DEFINE otORDepositLineAdd	475	
#DEFINE otORQuantityAdjustment	476	
#DEFINE otORBillToPayRet	477	
#DEFINE otORJournalLine	478	
#DEFINE otORListTxn	479	
#DEFINE otORCheckPrint	480	
#DEFINE otORReportEntityFilter	481	
#DEFINE otORTypeAdjustment	482	
#DEFINE otListDataExt	483	
#DEFINE otInventoryAdjustmentQuery	484	
#DEFINE otBillToPayQuery	485	
#DEFINE otCustomDetailReportQuery	486	
#DEFINE otGeneralDetailReportQuery	489	
#DEFINE otDataExtDefDel	490	
#DEFINE otCustomSummaryReportQuery	491	
#DEFINE otTxnDataExt	492	
#DEFINE otListDeletedQuery	493	
#DEFINE otGeneralSummaryReportQuery	495	
#DEFINE otItemInventoryAssemblyQuery	497	
#DEFINE otBudgetSummaryReportQuery	498	
#DEFINE otJobReportQuery	500	
#DEFINE otSalesTaxPaymentCheckQuery	501	
#DEFINE otBillPaymentCreditCardQuery	502	
#DEFINE otAgingReportQuery	503	
#DEFINE otDepositFilter	504	
#DEFINE otTimeReportQuery	506	
#DEFINE otBillPaymentCheckQuery	507	
#DEFINE otDepositQuery	508	
#DEFINE otDepositInfo	509	
#DEFINE otTxnDeletedQuery	510	
#DEFINE otPaymentLine	512	
#DEFINE otDataExtDelRet	513	
#DEFINE otBillPaymentCheckAdd	514	
#DEFINE otEarnings	515	
#DEFINE otDataExtDel	516	
#DEFINE otDeletedDateRangeFilter	517	
#DEFINE otPayrollItemWageAdd	518	
#DEFINE otReportEntityFilter	519	
#DEFINE otInventoryAdjustmentAdd	520	
#DEFINE otItemInventoryAssemblyLine	521	
#DEFINE otBillToPayRet	522	
#DEFINE otBillPaymentCheckRet	523	
#DEFINE otDepositLineAdd	524	
#DEFINE otReportTxnTypeFilter	525	
#DEFINE otColData	527	
#DEFINE otReceivePaymentToDepositRet	528	
#DEFINE otBillPaymentCreditCardAdd	529	
#DEFINE otTextRow	530	
#DEFINE otColDesc	531	
#DEFINE otInventoryAdjustmentRet	532	
#DEFINE otTxnDeletedRet	533	
#DEFINE otInventoryAdjustmentLineAdd	534	
#DEFINE otReportPeriod	535	
#DEFINE otQuantityAdjustment	536	
#DEFINE otDataExtDefMod	537	
#DEFINE otDataExtDefAdd	539	
#DEFINE otReportItemFilter	540	
#DEFINE otDepositLineRet	541	
#DEFINE otDepositAdd	542	
#DEFINE otBillPaymentCreditCardRet	543	
#DEFINE otSalesTaxPaymentCheckRet	544	
#DEFINE otInventoryAdjustmentLineRet	545	
#DEFINE otReportData	546	
#DEFINE otSickHours	547	
#DEFINE otSubtotalRow	548	
#DEFINE otSalesTaxPaymentCheckLineRet	549	
#DEFINE otTotalRow	550	
#DEFINE otDataExtMod	551	
#DEFINE otDataExtAdd	552	
#DEFINE otCashBackInfoAdd	553	
#DEFINE otDataExtDefRet	554	
#DEFINE otItemInventoryAssemblyAdd	555	
#DEFINE otDataRow	556	
#DEFINE otDepositRet	557	
#DEFINE otReportAccountFilter	558	
#DEFINE otEmployeePayrollInfo	559	
#DEFINE otDataExtDefDelRet	560	
#DEFINE otVacationHours	561	
#DEFINE otCompanyActivityRet	562	
#DEFINE otRowData	563	
#DEFINE otDataExtRet	564	
#DEFINE otValueAdjustment	565	
#DEFINE otItemInventoryAssemblyRet	566	
#DEFINE otListDeletedRet	567	
#DEFINE otReportRet	568	
#DEFINE otBillToPay	569	
#DEFINE otCreditToApply	570	
#DEFINE otDataExtDefQuery	571	
#DEFINE otBillToPayRetList	572	
#DEFINE otColDescList	573	
#DEFINE otDepositRetList	574	
#DEFINE otItemInventoryAssemblyLineList	575	
#DEFINE otDepositLineAddList	576	
#DEFINE otDepositLineRetList	577	
#DEFINE otInventoryAdjustmentLineAddList	578	
#DEFINE otReceivePaymentToDepositRetList	579	
#DEFINE otColDataList	580	
#DEFINE otORJournalLineList	581	
#DEFINE otSalesTaxPaymentCheckRetList	582	
#DEFINE otInventoryAdjustmentLineRetList	583	
#DEFINE otSalesTaxPaymentCheckLineRetList	584	
#DEFINE otTxnDeletedRetList	585	
#DEFINE otDataExtRetList	586	
#DEFINE otItemInventoryAssemblyRetList	587	
#DEFINE otInventoryAdjustmentRetList	588	
#DEFINE otBillPaymentCreditCardRetList	589	
#DEFINE otEarningsList	590	
#DEFINE otBillPaymentCheckRetList	591	
#DEFINE otListDeletedRetList	592	
#DEFINE otORReportDataList	593	
#DEFINE otDataExtDefRetList	594	
#DEFINE otENAssignToObjectList	595	
#DEFINE otENIncludeColumnList	596	
#DEFINE otENListDelTypeList	597	
#DEFINE otENTxnDelTypeList	598	
#DEFINE otENTxnTypeFilterList	599	
#DEFINE otENRemoveFromObjectList	600	
#DEFINE otColTitle	601	
#DEFINE otEmployeeAddress	602	
#DEFINE otClearedStatusMod	603	
#DEFINE otColTitleList	604	
#DEFINE otCurrentAppAccessRights	605	
#DEFINE otCashBackInfoRet	606	
#DEFINE otCompanyQuery	607	
#DEFINE otOREarnings	608	
#DEFINE otTxnFilterWithItemFilter	609	
#DEFINE otORItemFilter	610	
#DEFINE otItemFilter	611	
#DEFINE otEmployeePayrollInfoMod	612	
#DEFINE otORInvoiceLineMod	613	
#DEFINE otORSalesOrderLineAdd	614	
#DEFINE otSalesOrderQuery	615	
#DEFINE otTxnFilterNoAccount	616	
#DEFINE otORTxnNoAccountQuery	617	
#DEFINE otORPurchaseOrderLineMod	618	
#DEFINE otORSalesOrderLineRet	619	
#DEFINE otSalesOrderLineAdd	620	
#DEFINE otSalesOrderLineGroupRet	621	
#DEFINE otInvoiceLineMod	622	
#DEFINE otSalesOrderLineRet	623	
#DEFINE otSalesOrderAdd	624	
#DEFINE otTaxLineInfoRet	625	
#DEFINE otInvoiceLineGroupMod	626	
#DEFINE otSalesOrderRet	627	
#DEFINE otPurchaseOrderMod	628	
#DEFINE otReportClassFilter	629	
#DEFINE otPurchaseOrderLineGroupMod	630	
#DEFINE otInvoiceMod	631	
#DEFINE otSalesOrderLineGroupAdd	632	
#DEFINE otPurchaseOrderLineMod	633	
#DEFINE otORSalesOrderLineAddList	634	
#DEFINE otORSalesOrderLineRetList	635	
#DEFINE otPurchaseOrderLineModList	636	
#DEFINE otSalesOrderRetList	637	
#DEFINE otORInvoiceLineModList	638	
#DEFINE otInvoiceLineModList	639	
#DEFINE otSalesOrderLineRetList	640	
#DEFINE otORPurchaseOrderLineModList	641	
#DEFINE otORReportClassFilter	642	
#DEFINE otORItemInventoryAssemblyLine	645	
#DEFINE otItemFixedAssetQuery	646	
#DEFINE otORItemGroupLine	648	
#DEFINE otOREstimateLineMod	649	
#DEFINE otORSalesOrderLineMod	650	
#DEFINE otORCreditMemoLineMod	651	
#DEFINE otListDisplayAdd	652	
#DEFINE otListDisplayMod	653	
#DEFINE otTxnDisplayAdd	654	
#DEFINE otTxnDisplayMod	655	
#DEFINE otORReportModifiedDate	659	
#DEFINE otPayrollDetailReportQuery	660	
#DEFINE otPayrollSummaryReportQuery	661	
#DEFINE otTxnDataExtWithMacro	662	
#DEFINE otORListTxnWithMacro	663	
#DEFINE otDataEventSubscriptionQuery	665	
#DEFINE otUIEventSubscriptionQuery	666	
#DEFINE otORMenuSubmenu	667	
#DEFINE otUIExtensionSubscriptionQuery	668	
#DEFINE otSubscriptionDel	669	
#DEFINE otDataEventRecoveryInfoQuery	671	
#DEFINE otORListTxnEvent	672	
#DEFINE otCompanyFileEventSubscription	673	
#DEFINE otENCompanyFileEventOperationList	674	
#DEFINE otUIEventSubscriptionAdd	675	
#DEFINE otTxnEventSubscription	676	
#DEFINE otENTxnEventTypeList	677	
#DEFINE otENTxnEventOperationList	678	
#DEFINE otPayrollItemNonWageRet	679	
#DEFINE otCreditMemoMod	680	
#DEFINE otListEvent	681	
#DEFINE otMenuExtensionSubscription	682	
#DEFINE otEstimateMod	683	
#DEFINE otUIExtensionSubscriptionRet	685	
#DEFINE otCOMCallbackInfo	686	
#DEFINE otCreditMemoLineMod	687	
#DEFINE otFixedAssetSalesInfo	690	
#DEFINE otEstimateLineMod	691	
#DEFINE otDisplayCondition	692	
#DEFINE otENVisibleIfList	693	
#DEFINE otENVisibleIfNotList	694	
#DEFINE otENEnabledIfList	695	
#DEFINE otENEnabledIfNotList	696	
#DEFINE otItemFixedAssetMod	697	
#DEFINE otDataEventSubscriptionRet	700	
#DEFINE otListEventSubscription	701	
#DEFINE otENListEventTypeList	702	
#DEFINE otENListEventOperationList	703	
#DEFINE otCreditMemoLineGroupMod	704	
#DEFINE otItemFixedAssetRet	705	
#DEFINE otTxnEvent	706	
#DEFINE otUIExtensionSubscriptionAdd	707	
#DEFINE otCreditCardInfo	708	
#DEFINE otItemInventoryAssemblyMod	709	
#DEFINE otSubmenu	710	
#DEFINE otUIEventSubscriptionRet	711	
#DEFINE otDataEventRecoveryInfoRet	713	
#DEFINE otEstimateLineGroupMod	714	
#DEFINE otMenuItem	715	
#DEFINE otTemplateRet	716	
#DEFINE otSalesOrderLineMod	717	
#DEFINE otReportModifiedDateRangeFilter	718	
#DEFINE otDataEventSubscriptionAdd	719	
#DEFINE otSalesOrderMod	721	
#DEFINE otChargeMod	723	
#DEFINE otFixedAssetSalesInfoMod	724	
#DEFINE otCompanyFileEvent	725	
#DEFINE otItemFixedAssetAdd	726	
#DEFINE otSalesOrderLineGroupMod	727	
#DEFINE otPayrollItemNonWageQuery	729	
#DEFINE otORSalesOrderLineModList	730	
#DEFINE otOREstimateLineModList	731	
#DEFINE otCreditMemoLineModList	732	
#DEFINE otORCreditMemoLineModList	733	
#DEFINE otTxnEventSubscriptionList	735	
#DEFINE otTemplateRetList	736	
#DEFINE otEstimateLineModList	737	
#DEFINE otListEventSubscriptionList	738	
#DEFINE otPayrollItemNonWageRetList	739	
#DEFINE otSalesOrderLineModList	740	
#DEFINE otMenuItemList	742	
#DEFINE otItemFixedAssetRetList	743	
#DEFINE otORItemLineMod	744	
#DEFINE otItemReceiptQuery	745	
#DEFINE otItemReceiptRet	746	
#DEFINE otExpenseLineMod	747	
#DEFINE otBillMod	748	
#DEFINE otItemLineMod	749	
#DEFINE otItemGroupLineMod	750	
#DEFINE otExpenseLineModList	751	
#DEFINE otItemReceiptRetList	752	
#DEFINE otORItemLineModList	753	
#DEFINE otItemLineModList	755	
#DEFINE otOREvent	758	
#DEFINE otDataEvent	759	
#DEFINE otUIEvent	761	
#DEFINE otUIExtensionEvent	763	
#DEFINE otDataEventList	764	
#DEFINE otORProgCLSID	765	
#DEFINE otHostInfo	766	
#DEFINE otCurrencyAdd	767	
#DEFINE otCurrencyMod	771	
#DEFINE otCurrencyRet	772	
#DEFINE otCurrencyQuery	775	
#DEFINE otCurrencyRetList	776	
#DEFINE otDataEventRecoveryInfoDel	778	
#DEFINE otChargeFilter	779	
#DEFINE otORChargeTxnQuery	780	
#DEFINE otModifiedDateRange	781	
#DEFINE otORTransactionModifiedDateRangeFilter	782	
#DEFINE otTxnDateRange	783	
#DEFINE otORTransactionDateRangeFilter	784	
#DEFINE otORTransactionEntityFilter	785	
#DEFINE otORTransactionAccountFilter	786	
#DEFINE otORTransactionItemFilter	787	
#DEFINE otORTransactionClassFilter	788	
#DEFINE otORTransactionRefNumberFilter	789	
#DEFINE otTransactionFilter	790	
#DEFINE otORTransactionQuery	791	
#DEFINE otTransactionQuery	792	
#DEFINE otTxnTypeID	793	
#DEFINE otListTypeID	794	
#DEFINE otORCurrentWindow	795	
#DEFINE otTransactionModifiedDateRangeFilter	796	
#DEFINE otTransactionEntityFilter	797	
#DEFINE otTransactionClassFilter	798	
#DEFINE otTransactionItemFilter	799	
#DEFINE otTransactionAccountFilter	800	
#DEFINE otTransactionTypeFilter	801	
#DEFINE otItemReceiptAdd	802	
#DEFINE otLinkToTxn	803	
#DEFINE otTransactionRet	804	
#DEFINE otCurrentWindow	805	
#DEFINE otTransactionDateRangeFilter	806	
#DEFINE otItemReceiptMod	807	
#DEFINE otTransactionRetList	808	
#DEFINE otORPriceLevel	811	
#DEFINE otPriceLevelAdjustment	812	
#DEFINE otORPriceLevelPrice	813	
#DEFINE otPriceLevelFilter	814	
#DEFINE otORPriceLevelQuery	815	
#DEFINE otPriceLevelQuery	816	
#DEFINE otORPriceLevelRet	817	
#DEFINE otPriceLevelMod	818	
#DEFINE otPriceLevelRet	819	
#DEFINE otPriceLevelPerItem	820	
#DEFINE otPriceLevelAdd	821	
#DEFINE otPriceLevelPerItemRet	822	
#DEFINE otPriceLevelPerItemRetList	823	
#DEFINE otPriceLevelPerItemList	824	
#DEFINE otPriceLevelRetList	825	
#DEFINE otHostQuery	826	
#DEFINE otCompanyActivityQuery	827	
#DEFINE otPreferencesQuery	828	
#DEFINE otTemplateQuery	829	
#DEFINE otReceivePaymentToDepositQuery	830	
#DEFINE otORRatePriceLevel	831	
#DEFINE otORDiscountLineAdd	832	
#DEFINE otORSalesTaxLineAdd	833	
#DEFINE otORCustomPrice	834	
#DEFINE otORORCustomPrice	835	
#DEFINE otORDiscountLineRet	836	
#DEFINE otORSalesTaxLineRet	837	
#DEFINE otDiscountLineAdd	838	
#DEFINE otSalesTaxLineAdd	839	
#DEFINE otShippingLineRet	840	
#DEFINE otPriceLevels	841	
#DEFINE otDiscountLineRet	842	
#DEFINE otShippingLineAdd	843	
#DEFINE otSalesTaxLineRet	844	
#DEFINE otCreditCardTxnInfo	845	
#DEFINE otCreditCardTxnResultInfo	846	
#DEFINE otCreditCardTxnInputInfo	847	
#DEFINE otORSalesReceiptLineMod	849	
#DEFINE otBuildAssemblyFilter	850	
#DEFINE otORBuildAssemblyQuery	851	
#DEFINE otBuildAssemblyQuery	852	
#DEFINE otItemAssembliesCanBuildQuery	853	
#DEFINE otARRefundCreditCardQuery	854	
#DEFINE otItemAssembliesCanBuildRet	855	
#DEFINE otARRefundCreditCardAdd	856	
#DEFINE otBuildAssemblyMod	857	
#DEFINE otSalesReceiptLineMod	858	
#DEFINE otRefundAppliedToTxnRet	859	
#DEFINE otComponentItemLineRet	860	
#DEFINE otBuildAssemblyRet	861	
#DEFINE otDataExt	862	
#DEFINE otSalesReceiptMod	863	
#DEFINE otSalesReceiptLineGroupMod	864	
#DEFINE otRefundAppliedToTxnAdd	865	
#DEFINE otBuildAssemblyAdd	866	
#DEFINE otARRefundCreditCardRet	867	
#DEFINE otBuildAssemblyRetList	870	
#DEFINE otARRefundCreditCardRetList	871	
#DEFINE otRefundAppliedToTxnRetList	872	
#DEFINE otDataExtList	873	
#DEFINE otRefundAppliedToTxnAddList	874	
#DEFINE otComponentItemLineRetList	875	
#DEFINE otSalesReceiptLineModList	876	
#DEFINE otORSalesReceiptLineModList	877	
#DEFINE otVehicleQuery	878	
#DEFINE otORBillingRate	879	
#DEFINE otORCustomRate	880	
#DEFINE otBillingRateAdjustment	881	
#DEFINE otORBillingRateItem	882	
#DEFINE otORORCustomRate	883	
#DEFINE otBillingRateFilter	884	
#DEFINE otORBillingRateQuery	885	
#DEFINE otBillingRateQuery	886	
#DEFINE otOdometerReadingAdd	887	
#DEFINE otORVehicleMileageAdd	888	
#DEFINE otVehicleMileageFilter	889	
#DEFINE otORVehicleMileageQuery	890	
#DEFINE otVehicleMileageQuery	891	
#DEFINE otORBillingRateRet	892	
#DEFINE otORSpecialItemRet	893	
#DEFINE otPayrollItemMetaData	894	
#DEFINE otSpecialItemAdd	895	
#DEFINE otBillingRateRet	896	
#DEFINE otTimeTrackingMod	897	
#DEFINE otVehicleMileageAdd	898	
#DEFINE otTermsMetaData	899	
#DEFINE otCustomerMsgMetaData	900	
#DEFINE otReceivePaymentMod	901	
#DEFINE otJournalEntryMod	902	
#DEFINE otCheckMod	903	
#DEFINE otClassMetaData	904	
#DEFINE otVehicleAdd	905	
#DEFINE otSalesTaxCodeMetaData	906	
#DEFINE otEntityMetaData	907	
#DEFINE otBillingRateAdd	908	
#DEFINE otShipMethodMetaData	909	
#DEFINE otSpecialAccountAdd	910	
#DEFINE otBillPaymentCheckMod	911	
#DEFINE otAddressBlock	912	
#DEFINE otCreditCardChargeMod	913	
#DEFINE otCustomerTypeMetaData	914	
#DEFINE otItemMetaData	915	
#DEFINE otPaymentMethodMetaData	916	
#DEFINE otJobTypeMetaData	917	
#DEFINE otListMetaData	918	
#DEFINE otJournalLineMod	919	
#DEFINE otPriceLevelMetaData	920	
#DEFINE otVehicleMetaData	921	
#DEFINE otToDoMetaData	922	
#DEFINE otBillingRatePerItemRet	923	
#DEFINE otVehicleMileageRet	924	
#DEFINE otCreditCardCreditMod	925	
#DEFINE otVendorTypeMetaData	926	
#DEFINE otVehicleMod	927	
#DEFINE otBillingRateMetaData	928	
#DEFINE otIncludeListMetaData	929	
#DEFINE otTemplateMetaData	930	
#DEFINE otSalesRepMetaData	931	
#DEFINE otBillingRatePerItem	932	
#DEFINE otVehicleRet	933	
#DEFINE otAppliedToTxnMod	934	
#DEFINE otAccountMetaData	935	
#DEFINE otVehicleRetList	936	
#DEFINE otBillingRatePerItemRetList	937	
#DEFINE otJournalLineModList	938	
#DEFINE otAppliedToTxnModList	939	
#DEFINE otBillingRateRetList	940	
#DEFINE otVehicleMileageRetList	941	
#DEFINE otBillingRatePerItemList	942	
#DEFINE otPaymentMethodListFilter	943	
#DEFINE otENPaymentMethodTypeList	944	
#DEFINE otORPaymentMethodListQuery	945	
#DEFINE otUnitOfMeasureSetQuery	946	
#DEFINE otWorkersCompCodeFilter	947	
#DEFINE otORWorkersCompCodeQuery	948	
#DEFINE otWorkersCompCodeQuery	949	
#DEFINE otORMarkupRatePriceLevel	950	
#DEFINE otDepositInfoMod	951	
#DEFINE otORDepositLineMod	952	
#DEFINE otListMerge	953	
#DEFINE otListMergeRet	954	
#DEFINE otCreditCardTxnInputInfoMod	955	
#DEFINE otWorkersCompCodeMod	956	
#DEFINE otRateEntry	957	
#DEFINE otCreditCardTxnResultInfoMod	958	
#DEFINE otMergeFrom	959	
#DEFINE otWorkersCompCodeRet	960	
#DEFINE otAccountTaxLineInfoRet	961	
#DEFINE otDepositMod	962	
#DEFINE otMergedTo	963	
#DEFINE otBaseUnit	964	
#DEFINE otUnitOfMeasureSetAdd	965	
#DEFINE otSubscribedServices	966	
#DEFINE otDepositLineMod	967	
#DEFINE otMergedFrom	968	
#DEFINE otDefaultUnit	969	
#DEFINE otCreditCardTxnInfoMod	970	
#DEFINE otCashBackInfoMod	971	
#DEFINE otWorkersCompCodeAdd	972	
#DEFINE otService	973	
#DEFINE otMergeTo	974	
#DEFINE otRateHistory	975	
#DEFINE otRelatedUnit	976	
#DEFINE otUnitOfMeasureSetRet	977	
#DEFINE otUnitOfMeasureSetRetList	978	
#DEFINE otWorkersCompCodeRetList	979	
#DEFINE otDefaultUnitList	980	
#DEFINE otServiceList	981	
#DEFINE otRateEntryList	982	
#DEFINE otDepositLineModList	983	
#DEFINE otRelatedUnitList	984	
#DEFINE otAccountTaxLineInfoRetList	985	
#DEFINE otRateHistoryList	986	
#DEFINE otApplyCheckToTxnAdd	987	
#DEFINE otApplyCheckToTxnMod	988	
#DEFINE otApplyCheckToTxnAddList	989	
#DEFINE otApplyCheckToTxnModList	990	
#DEFINE otORCurrencyFilter	991	
#DEFINE otPriceLevelPerItemCurrency	992	
#DEFINE otForm1099CategoryAccountMappingQuery	993	
#DEFINE otENMappingCategoryList	994	
#DEFINE otSalesTaxReturnLineQuery	995	
#DEFINE otCurrencyExchangeRate	996	
#DEFINE otORHomeCurrencyAdjustment	997	
#DEFINE otPriceLevelPerItemRetCurrency	998	
#DEFINE otSalesTaxReturnLineRet	999	
#DEFINE otThisIsNotTheLast_MoreToComeInTheFuture	1000	

*--- Constant Group: ENResponseType
#DEFINE rtNA	-1	
#DEFINE rtItemNonInventoryAddRs	1001	
#DEFINE rtEmployeeQueryRs	1002	
#DEFINE rtEntityQueryRs	1003	
#DEFINE rtItemDiscountModRs	1004	
#DEFINE rtVendorTypeQueryRs	1006	
#DEFINE rtDateDrivenTermsAddRs	1007	
#DEFINE rtHostQueryRs	1008	
#DEFINE rtItemInventoryAddRs	1009	
#DEFINE rtOtherNameQueryRs	1010	
#DEFINE rtItemOtherChargeModRs	1012	
#DEFINE rtJournalEntryAddRs	1013	
#DEFINE rtItemSubtotalAddRs	1014	
#DEFINE rtCustomerQueryRs	1015	
#DEFINE rtCustomerAddRs	1016	
#DEFINE rtSalesTaxCodeAddRs	1018	
#DEFINE rtItemGroupQueryRs	1019	
#DEFINE rtAccountModRs	1020	
#DEFINE rtCreditCardCreditQueryRs	1022	
#DEFINE rtItemQueryRs	1023	
#DEFINE rtTxnDelRs	1024	
#DEFINE rtEmployeeModRs	1025	
#DEFINE rtItemSalesTaxModRs	1026	
#DEFINE rtSalesRepModRs	1027	
#DEFINE rtJournalEntryQueryRs	1028	
#DEFINE rtCustomerMsgAddRs	1029	
#DEFINE rtShipMethodAddRs	1030	
#DEFINE rtCustomerTypeAddRs	1031	
#DEFINE rtCheckAddRs	1032	
#DEFINE rtReceivePaymentAddRs	1033	
#DEFINE rtVendorCreditAddRs	1034	
#DEFINE rtItemNonInventoryModRs	1035	
#DEFINE rtShipMethodQueryRs	1036	
#DEFINE rtCreditMemoQueryRs	1037	
#DEFINE rtClassQueryRs	1038	
#DEFINE rtItemDiscountQueryRs	1039	
#DEFINE rtItemServiceAddRs	1040	
#DEFINE rtPurchaseOrderQueryRs	1041	
#DEFINE rtItemInventoryQueryRs	1042	
#DEFINE rtSalesReceiptAddRs	1043	
#DEFINE rtSalesReceiptQueryRs	1044	
#DEFINE rtToDoModRs	1045	
#DEFINE rtEstimateQueryRs	1046	
#DEFINE rtItemServiceQueryRs	1047	
#DEFINE rtBillAddRs	1048	
#DEFINE rtVendorAddRs	1050	
#DEFINE rtItemInventoryModRs	1051	
#DEFINE rtVendorCreditQueryRs	1052	
#DEFINE rtItemPaymentAddRs	1053	
#DEFINE rtDateDrivenTermsQueryRs	1054	
#DEFINE rtCreditCardCreditAddRs	1055	
#DEFINE rtItemSubtotalModRs	1056	
#DEFINE rtCustomerModRs	1057	
#DEFINE rtVendorTypeAddRs	1058	
#DEFINE rtItemSalesTaxGroupAddRs	1059	
#DEFINE rtChargeAddRs	1060	
#DEFINE rtSalesTaxCodeModRs	1061	
#DEFINE rtClassAddRs	1062	
#DEFINE rtItemGroupAddRs	1063	
#DEFINE rtItemSalesTaxQueryRs	1064	
#DEFINE rtTimeTrackingQueryRs	1065	
#DEFINE rtPayrollItemWageQueryRs	1066	
#DEFINE rtCheckQueryRs	1067	
#DEFINE rtItemOtherChargeQueryRs	1068	
#DEFINE rtInvoiceQueryRs	1069	
#DEFINE rtChargeQueryRs	1070	
#DEFINE rtOtherNameAddRs	1071	
#DEFINE rtCreditMemoAddRs	1072	
#DEFINE rtToDoQueryRs	1073	
#DEFINE rtCreditCardChargeAddRs	1074	
#DEFINE rtPaymentMethodQueryRs	1075	
#DEFINE rtCompanyQueryRs	1077	
#DEFINE rtItemPaymentQueryRs	1080	
#DEFINE rtJobTypeQueryRs	1081	
#DEFINE rtAccountQueryRs	1082	
#DEFINE rtItemDiscountAddRs	1083	
#DEFINE rtItemServiceModRs	1084	
#DEFINE rtCustomerMsgQueryRs	1085	
#DEFINE rtVendorModRs	1086	
#DEFINE rtItemPaymentModRs	1087	
#DEFINE rtInvoiceAddRs	1088	
#DEFINE rtBillQueryRs	1089	
#DEFINE rtStandardTermsAddRs	1090	
#DEFINE rtItemOtherChargeAddRs	1091	
#DEFINE rtItemSubtotalQueryRs	1092	
#DEFINE rtReceivePaymentQueryRs	1093	
#DEFINE rtPaymentMethodAddRs	1095	
#DEFINE rtPurchaseOrderAddRs	1096	
#DEFINE rtCreditCardChargeQueryRs	1097	
#DEFINE rtItemSalesTaxGroupModRs	1098	
#DEFINE rtListDelRs	1099	
#DEFINE rtClassModRs	1100	
#DEFINE rtItemGroupModRs	1101	
#DEFINE rtItemNonInventoryQueryRs	1102	
#DEFINE rtTimeTrackingAddRs	1103	
#DEFINE rtEstimateAddRs	1104	
#DEFINE rtAccountAddRs	1105	
#DEFINE rtPreferencesQueryRs	1106	
#DEFINE rtJobTypeAddRs	1107	
#DEFINE rtToDoAddRs	1108	
#DEFINE rtCustomerTypeQueryRs	1109	
#DEFINE rtVendorQueryRs	1110	
#DEFINE rtTxnVoidRs	1111	
#DEFINE rtSalesRepQueryRs	1112	
#DEFINE rtStandardTermsQueryRs	1113	
#DEFINE rtEmployeeAddRs	1114	
#DEFINE rtItemSalesTaxAddRs	1115	
#DEFINE rtOtherNameModRs	1116	
#DEFINE rtSalesRepAddRs	1117	
#DEFINE rtTermsQueryRs	1119	
#DEFINE rtItemSalesTaxGroupQueryRs	1120	
#DEFINE rtSalesTaxCodeQueryRs	1121	
#DEFINE rtBillPaymentCreditCardQueryRs	1122	
#DEFINE rtBillPaymentCheckQueryRs	1123	
#DEFINE rtItemInventoryAssemblyQueryRs	1124	
#DEFINE rtInventoryAdjustmentQueryRs	1125	
#DEFINE rtListDeletedQueryRs	1126	
#DEFINE rtDataExtDefQueryRs	1127	
#DEFINE rtItemInventoryAssemblyAddRs	1128	
#DEFINE rtCustomDetailReportQueryRs	1129	
#DEFINE rtBillToPayQueryRs	1130	
#DEFINE rtBillPaymentCreditCardAddRs	1131	
#DEFINE rtGeneralSummaryReportQueryRs	1132	
#DEFINE rtDepositQueryRs	1133	
#DEFINE rtDataExtAddRs	1134	
#DEFINE rtPayrollItemWageAddRs	1135	
#DEFINE rtDataExtModRs	1136	
#DEFINE rtGeneralDetailReportQueryRs	1137	
#DEFINE rtJobReportQueryRs	1138	
#DEFINE rtBudgetSummaryReportQueryRs	1139	
#DEFINE rtBillPaymentCheckAddRs	1140	
#DEFINE rtDepositAddRs	1141	
#DEFINE rtDataExtDefAddRs	1142	
#DEFINE rtDataExtDelRs	1143	
#DEFINE rtDataExtDefModRs	1144	
#DEFINE rtTimeReportQueryRs	1145	
#DEFINE rtReceivePaymentToDepositQueryRs	1146	
#DEFINE rtCompanyActivityQueryRs	1147	
#DEFINE rtAgingReportQueryRs	1148	
#DEFINE rtInventoryAdjustmentAddRs	1149	
#DEFINE rtTxnDeletedQueryRs	1150	
#DEFINE rtSalesTaxPaymentCheckQueryRs	1151	
#DEFINE rtCustomSummaryReportQueryRs	1152	
#DEFINE rtDataExtDefDelRs	1153	
#DEFINE rtSalesOrderQueryRs	1154	
#DEFINE rtSalesOrderAddRs	1155	
#DEFINE rtPurchaseOrderModRs	1156	
#DEFINE rtInvoiceModRs	1157	
#DEFINE rtItemInventoryAssemblyModRs	1158	
#DEFINE rtPayrollDetailReportQueryRs	1159	
#DEFINE rtUIEventSubscriptionQueryRs	1160	
#DEFINE rtSalesOrderModRs	1161	
#DEFINE rtPayrollItemNonWageQueryRs	1162	
#DEFINE rtUIExtensionSubscriptionQueryRs	1163	
#DEFINE rtPayrollSummaryReportQueryRs	1165	
#DEFINE rtTemplateQueryRs	1166	
#DEFINE rtDataEventSubscriptionQueryRs	1167	
#DEFINE rtDataEventRecoveryInfoQueryRs	1168	
#DEFINE rtItemFixedAssetQueryRs	1169	
#DEFINE rtChargeModRs	1170	
#DEFINE rtEstimateModRs	1171	
#DEFINE rtItemFixedAssetModRs	1172	
#DEFINE rtItemFixedAssetAddRs	1173	
#DEFINE rtUIExtensionSubscriptionAddRs	1174	
#DEFINE rtUIEventSubscriptionAddRs	1175	
#DEFINE rtCreditMemoModRs	1176	
#DEFINE rtDataEventSubscriptionAddRs	1177	
#DEFINE rtItemReceiptQueryRs	1179	
#DEFINE rtQBXMLEvents	1180	
#DEFINE rtBillModRs	1181	
#DEFINE rtCustomSummaryReportQueryRq	1182	
#DEFINE rtBillModRq	1183	
#DEFINE rtBillAddRq	1184	
#DEFINE rtReceivePaymentAddRq	1185	
#DEFINE rtItemInventoryAssemblyModRq	1186	
#DEFINE rtItemInventoryAssemblyAddRq	1187	
#DEFINE rtReceivePaymentQueryRq	1188	
#DEFINE rtToDoQueryRq	1189	
#DEFINE rtDataExtModRq	1190	
#DEFINE rtDataExtAddRq	1191	
#DEFINE rtAgingReportQueryRq	1192	
#DEFINE rtOtherNameQueryRq	1193	
#DEFINE rtCustomerMsgAddRq	1194	
#DEFINE rtCustomerTypeAddRq	1195	
#DEFINE rtPayrollDetailReportQueryRq	1196	
#DEFINE rtCheckQueryRq	1197	
#DEFINE rtUIEventSubscriptionQueryRq	1198	
#DEFINE rtCustomerMsgQueryRq	1199	
#DEFINE rtSalesReceiptQueryRq	1200	
#DEFINE rtVendorQueryRq	1201	
#DEFINE rtCustomDetailReportQueryRq	1202	
#DEFINE rtBillPaymentCreditCardQueryRq	1203	
#DEFINE rtItemOtherChargeModRq	1204	
#DEFINE rtItemOtherChargeAddRq	1205	
#DEFINE rtItemServiceQueryRq	1206	
#DEFINE rtSalesOrderModRq	1207	
#DEFINE rtSalesOrderAddRq	1208	
#DEFINE rtVendorTypeQueryRq	1209	
#DEFINE rtBillPaymentCheckQueryRq	1210	
#DEFINE rtPayrollItemNonWageQueryRq	1211	
#DEFINE rtReceivePaymentToDepositQueryRq	1212	
#DEFINE rtTimeTrackingAddRq	1213	
#DEFINE rtStandardTermsQueryRq	1214	
#DEFINE rtUIExtensionSubscriptionQueryRq	1215	
#DEFINE rtItemDiscountQueryRq	1216	
#DEFINE rtVendorTypeAddRq	1217	
#DEFINE rtCreditMemoQueryRq	1218	
#DEFINE rtItemReceiptQueryRq	1219	
#DEFINE rtBillPaymentCreditCardAddRq	1220	
#DEFINE rtVendorCreditQueryRq	1221	
#DEFINE rtItemSubtotalQueryRq	1222	
#DEFINE rtInventoryAdjustmentAddRq	1223	
#DEFINE rtEntityQueryRq	1224	
#DEFINE rtPurchaseOrderQueryRq	1225	
#DEFINE rtVendorCreditAddRq	1226	
#DEFINE rtPreferencesQueryRq	1227	
#DEFINE rtItemInventoryAssemblyQueryRq	1228	
#DEFINE rtGeneralSummaryReportQueryRq	1229	
#DEFINE rtInvoiceModRq	1230	
#DEFINE rtInvoiceAddRq	1231	
#DEFINE rtBillQueryRq	1232	
#DEFINE rtSalesTaxCodeAddRq	1233	
#DEFINE rtItemServiceModRq	1234	
#DEFINE rtItemServiceAddRq	1235	
#DEFINE rtSalesOrderQueryRq	1236	
#DEFINE rtSalesRepQueryRq	1237	
#DEFINE rtListDeletedQueryRq	1238	
#DEFINE rtAccountQueryRq	1239	
#DEFINE rtJournalEntryAddRq	1240	
#DEFINE rtPayrollSummaryReportQueryRq	1241	
#DEFINE rtInvoiceQueryRq	1242	
#DEFINE rtOtherNameModRq	1243	
#DEFINE rtOtherNameAddRq	1244	
#DEFINE rtTxnDisplayModRq	1245	
#DEFINE rtTxnDisplayAddRq	1246	
#DEFINE rtGeneralDetailReportQueryRq	1247	
#DEFINE rtToDoAddRq	1248	
#DEFINE rtDataExtDelRq	1249	
#DEFINE rtSalesRepModRq	1250	
#DEFINE rtSalesRepAddRq	1251	
#DEFINE rtItemPaymentQueryRq	1252	
#DEFINE rtPaymentMethodAddRq	1253	
#DEFINE rtCompanyQueryRq	1254	
#DEFINE rtDataExtDefModRq	1255	
#DEFINE rtDataExtDefAddRq	1256	
#DEFINE rtListDelRq	1257	
#DEFINE rtEmployeeModRq	1258	
#DEFINE rtEmployeeAddRq	1259	
#DEFINE rtChargeQueryRq	1260	
#DEFINE rtTemplateQueryRq	1261	
#DEFINE rtTxnDeletedQueryRq	1262	
#DEFINE rtJobTypeAddRq	1263	
#DEFINE rtItemSalesTaxGroupModRq	1264	
#DEFINE rtItemSalesTaxGroupAddRq	1265	
#DEFINE rtDateDrivenTermsQueryRq	1266	
#DEFINE rtItemGroupModRq	1267	
#DEFINE rtItemGroupAddRq	1268	
#DEFINE rtItemSalesTaxQueryRq	1269	
#DEFINE rtCreditCardCreditAddRq	1270	
#DEFINE rtDataEventSubscriptionQueryRq	1271	
#DEFINE rtCustomerQueryRq	1272	
#DEFINE rtDataEventRecoveryInfoQueryRq	1273	
#DEFINE rtItemSubtotalModRq	1274	
#DEFINE rtItemSubtotalAddRq	1275	
#DEFINE rtDepositQueryRq	1276	
#DEFINE rtAccountAddRq	1277	
#DEFINE rtSalesReceiptAddRq	1278	
#DEFINE rtCreditCardChargeAddRq	1279	
#DEFINE rtItemFixedAssetQueryRq	1280	
#DEFINE rtPayrollItemWageQueryRq	1281	
#DEFINE rtItemSalesTaxGroupQueryRq	1282	
#DEFINE rtClassAddRq	1283	
#DEFINE rtChargeModRq	1284	
#DEFINE rtChargeAddRq	1285	
#DEFINE rtListDisplayModRq	1286	
#DEFINE rtListDisplayAddRq	1287	
#DEFINE rtEstimateModRq	1288	
#DEFINE rtEstimateAddRq	1289	
#DEFINE rtItemFixedAssetModRq	1290	
#DEFINE rtItemFixedAssetAddRq	1291	
#DEFINE rtTermsQueryRq	1292	
#DEFINE rtBillPaymentCheckAddRq	1293	
#DEFINE rtClassQueryRq	1294	
#DEFINE rtPayrollItemWageAddRq	1295	
#DEFINE rtUIExtensionSubscriptionAddRq	1296	
#DEFINE rtSalesTaxCodeQueryRq	1297	
#DEFINE rtInventoryAdjustmentQueryRq	1298	
#DEFINE rtDepositAddRq	1299	
#DEFINE rtJournalEntryQueryRq	1300	
#DEFINE rtPaymentMethodQueryRq	1301	
#DEFINE rtTxnDelRq	1302	
#DEFINE rtItemSalesTaxModRq	1303	
#DEFINE rtItemSalesTaxAddRq	1304	
#DEFINE rtItemOtherChargeQueryRq	1305	
#DEFINE rtItemGroupQueryRq	1306	
#DEFINE rtTimeTrackingQueryRq	1307	
#DEFINE rtDataExtDefDelRq	1308	
#DEFINE rtUIEventSubscriptionAddRq	1309	
#DEFINE rtBillToPayQueryRq	1310	
#DEFINE rtDataEventRecoveryInfoDelRq	1311	
#DEFINE rtStandardTermsAddRq	1312	
#DEFINE rtTxnVoidRq	1313	
#DEFINE rtCreditMemoModRq	1314	
#DEFINE rtCreditMemoAddRq	1315	
#DEFINE rtCustomerModRq	1316	
#DEFINE rtCustomerAddRq	1317	
#DEFINE rtSalesTaxPaymentCheckQueryRq	1318	
#DEFINE rtCheckAddRq	1319	
#DEFINE rtCustomerTypeQueryRq	1320	
#DEFINE rtShipMethodQueryRq	1321	
#DEFINE rtCreditCardChargeQueryRq	1322	
#DEFINE rtDataEventSubscriptionAddRq	1323	
#DEFINE rtTimeReportQueryRq	1324	
#DEFINE rtItemNonInventoryModRq	1325	
#DEFINE rtItemNonInventoryAddRq	1326	
#DEFINE rtDateDrivenTermsAddRq	1327	
#DEFINE rtSubscriptionDelRq	1328	
#DEFINE rtCreditCardCreditQueryRq	1329	
#DEFINE rtEstimateQueryRq	1330	
#DEFINE rtShipMethodAddRq	1331	
#DEFINE rtItemQueryRq	1332	
#DEFINE rtEmployeeQueryRq	1333	
#DEFINE rtClearedStatusModRq	1334	
#DEFINE rtItemPaymentModRq	1335	
#DEFINE rtItemPaymentAddRq	1336	
#DEFINE rtItemInventoryQueryRq	1337	
#DEFINE rtJobTypeQueryRq	1338	
#DEFINE rtJobReportQueryRq	1339	
#DEFINE rtHostQueryRq	1340	
#DEFINE rtItemNonInventoryQueryRq	1341	
#DEFINE rtPurchaseOrderModRq	1342	
#DEFINE rtPurchaseOrderAddRq	1343	
#DEFINE rtCompanyActivityQueryRq	1344	
#DEFINE rtItemDiscountModRq	1345	
#DEFINE rtItemDiscountAddRq	1346	
#DEFINE rtItemInventoryModRq	1347	
#DEFINE rtItemInventoryAddRq	1348	
#DEFINE rtVendorModRq	1349	
#DEFINE rtVendorAddRq	1350	
#DEFINE rtDataExtDefQueryRq	1351	
#DEFINE rtBudgetSummaryReportQueryRq	1352	
#DEFINE rtTxnDisplayModRs	1353	
#DEFINE rtTxnDisplayAddRs	1354	
#DEFINE rtListDisplayModRs	1355	
#DEFINE rtListDisplayAddRs	1356	
#DEFINE rtDataEventRecoveryInfoDelRs	1357	
#DEFINE rtSubscriptionDelRs	1358	
#DEFINE rtClearedStatusModRs	1359	
#DEFINE rtCurrencyQueryRq	1360	
#DEFINE rtCurrencyModRq	1363	
#DEFINE rtCurrencyAddRq	1364	
#DEFINE rtCurrencyQueryRs	1366	
#DEFINE rtCurrencyModRs	1369	
#DEFINE rtCurrencyAddRs	1370	
#DEFINE rtItemReceiptModRq	1372	
#DEFINE rtItemReceiptAddRq	1373	
#DEFINE rtTransactionQueryRq	1374	
#DEFINE rtItemReceiptModRs	1375	
#DEFINE rtItemReceiptAddRs	1376	
#DEFINE rtTransactionQueryRs	1377	
#DEFINE rtPriceLevelQueryRq	1378	
#DEFINE rtPriceLevelModRq	1379	
#DEFINE rtPriceLevelAddRq	1380	
#DEFINE rtPriceLevelQueryRs	1381	
#DEFINE rtPriceLevelModRs	1382	
#DEFINE rtPriceLevelAddRs	1383	
#DEFINE rtItemAssembliesCanBuildQueryRq	1384	
#DEFINE rtBuildAssemblyQueryRq	1385	
#DEFINE rtARRefundCreditCardQueryRq	1386	
#DEFINE rtSalesReceiptModRq	1387	
#DEFINE rtBuildAssemblyModRq	1388	
#DEFINE rtBuildAssemblyAddRq	1389	
#DEFINE rtARRefundCreditCardAddRq	1390	
#DEFINE rtItemAssembliesCanBuildQueryRs	1391	
#DEFINE rtBuildAssemblyQueryRs	1392	
#DEFINE rtARRefundCreditCardQueryRs	1393	
#DEFINE rtSalesReceiptModRs	1394	
#DEFINE rtBuildAssemblyModRs	1395	
#DEFINE rtBuildAssemblyAddRs	1396	
#DEFINE rtARRefundCreditCardAddRs	1397	
#DEFINE rtReceivePaymentModRq	1398	
#DEFINE rtVehicleMileageAddRq	1399	
#DEFINE rtBillingRateAddRq	1400	
#DEFINE rtTimeTrackingModRq	1401	
#DEFINE rtJournalEntryModRq	1402	
#DEFINE rtVehicleModRq	1403	
#DEFINE rtVehicleAddRq	1404	
#DEFINE rtCreditCardCreditModRq	1405	
#DEFINE rtVehicleQueryRq	1406	
#DEFINE rtAccountModRq	1407	
#DEFINE rtCreditCardChargeModRq	1408	
#DEFINE rtBillPaymentCheckModRq	1409	
#DEFINE rtSpecialItemAddRq	1410	
#DEFINE rtVehicleMileageQueryRq	1411	
#DEFINE rtCheckModRq	1412	
#DEFINE rtSpecialAccountAddRq	1413	
#DEFINE rtBillingRateQueryRq	1414	
#DEFINE rtReceivePaymentModRs	1415	
#DEFINE rtVehicleMileageAddRs	1416	
#DEFINE rtBillingRateAddRs	1417	
#DEFINE rtTimeTrackingModRs	1418	
#DEFINE rtJournalEntryModRs	1419	
#DEFINE rtVehicleModRs	1420	
#DEFINE rtVehicleAddRs	1421	
#DEFINE rtCreditCardCreditModRs	1422	
#DEFINE rtVehicleQueryRs	1423	
#DEFINE rtCreditCardChargeModRs	1424	
#DEFINE rtBillPaymentCheckModRs	1425	
#DEFINE rtSpecialItemAddRs	1426	
#DEFINE rtVehicleMileageQueryRs	1427	
#DEFINE rtCheckModRs	1428	
#DEFINE rtSpecialAccountAddRs	1429	
#DEFINE rtBillingRateQueryRs	1430	
#DEFINE rtWorkersCompCodeQueryRq	1431	
#DEFINE rtUnitOfMeasureSetQueryRq	1432	
#DEFINE rtDepositModRq	1433	
#DEFINE rtListMergeRq	1434	
#DEFINE rtAccountTaxLineInfoQueryRq	1435	
#DEFINE rtUnitOfMeasureSetAddRq	1436	
#DEFINE rtWorkersCompCodeModRq	1437	
#DEFINE rtWorkersCompCodeAddRq	1438	
#DEFINE rtWorkersCompCodeQueryRs	1439	
#DEFINE rtUnitOfMeasureSetQueryRs	1440	
#DEFINE rtDepositModRs	1441	
#DEFINE rtListMergeRs	1442	
#DEFINE rtAccountTaxLineInfoQueryRs	1443	
#DEFINE rtUnitOfMeasureSetAddRs	1444	
#DEFINE rtWorkersCompCodeModRs	1445	
#DEFINE rtWorkersCompCodeAddRs	1446	
#DEFINE rtSalesTaxReturnQueryRq	1447	
#DEFINE rtVendorCreditModRq	1448	
#DEFINE rtSalesTaxCodeModRq	1449	
#DEFINE rtForm1099CategoryAccountMappingQueryRq	1450	
#DEFINE rtSalesTaxReturnLineQueryRq	1451	
#DEFINE rtClassModRq	1452	
#DEFINE rtPayrollLastPeriodQueryRq	1453	
#DEFINE rtForm1099CategoryAccountMappingModRq	1454	
#DEFINE rtSalesTaxReturnQueryRs	1455	
#DEFINE rtVendorCreditModRs	1456	
#DEFINE rtForm1099CategoryAccountMappingQueryRs	1457	
#DEFINE rtSalesTaxReturnLineQueryRs	1458	
#DEFINE rtPayrollLastPeriodQueryRs	1459	
#DEFINE rtForm1099CategoryAccountMappingModRs	1460	
#DEFINE rtInventoryAdjustmentModRq	1461	
#DEFINE rtToDoModRq	1462	
#DEFINE rtInventorySiteModRq	1463	
#DEFINE rtInventorySiteAddRq	1464	
#DEFINE rtTransferInventoryModRq	1465	
#DEFINE rtTransferInventoryAddRq	1466	
#DEFINE rtSalesTaxPaymentCheckModRq	1467	
#DEFINE rtSalesTaxPaymentCheckAddRq	1468	
#DEFINE rtInventorySiteQueryRq	1469	
#DEFINE rtSalesTaxPayableQueryRq	1470	
#DEFINE rtTransferInventoryQueryRq	1471	
#DEFINE rtInventoryAdjustmentModRs	1472	
#DEFINE rtInventorySiteModRs	1473	
#DEFINE rtInventorySiteAddRs	1474	
#DEFINE rtTransferInventoryModRs	1475	
#DEFINE rtTransferInventoryAddRs	1476	
#DEFINE rtSalesTaxPaymentCheckModRs	1477	
#DEFINE rtSalesTaxPaymentCheckAddRs	1478	
#DEFINE rtInventorySiteQueryRs	1479	
#DEFINE rtSalesTaxPayableQueryRs	1480	
#DEFINE rtTransferInventoryQueryRs	1481	
#DEFINE rtItemSitesQueryRq	1482	
#DEFINE rtItemSitesQueryRs	1483	
#DEFINE rtBarCodeQueryRq	1484	
#DEFINE rtTransferQueryRq	1485	
#DEFINE rtTransferModRq	1486	
#DEFINE rtTransferAddRq	1487	
#DEFINE rtBarCodeQueryRs	1488	
#DEFINE rtTransferQueryRs	1489	
#DEFINE rtTransferModRs	1490	
#DEFINE rtTransferAddRs	1491	
#DEFINE rtThisIsNotTheLast_MoreToComeInTheFuture	1492	
