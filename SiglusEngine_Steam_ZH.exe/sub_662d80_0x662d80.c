// 函数: sub_662d80
// 地址: 0x662d80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

BSTR bstrString = *arg1

if (bstrString != 0)
    SysFreeString(bstrString)
    *arg1 = 0

int32_t eax = arg1[1]

if (eax != 0)
    j__free(eax)
    arg1[1] = 0

j__free(arg1)
return arg1
