// 函数: sub_43a9da
// 地址: 0x43a9da
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
void*** eax = sub_42cfa1(0x14)
void*** edi_1

if (eax == 0)
    edi_1 = nullptr
else
    edi_1 = sub_46b602(eax, 0, arg1[5], "UsageType")

void* var_14_1
int32_t* ecx_1

if (edi_1 != 0)
    arg1[5] = edi_1
    
    if (arg2 == 0)
        return 0
    
    void* eax_2 = sub_46b5aa(arg2)
    edi_1[2] = eax_2
    ecx_1 = arg1
    
    if (eax_2 != 0)
        int32_t result = sub_43924a(ecx_1, eax_2, *(eax_2 + 0x18))
        
        if (result s< 0)
            return result
        
        *(eax_2 + 0x11) &= 0xf1
        return 0
    
    var_14_1 = eax_2
else
    var_14_1 = nullptr
    ecx_1 = arg1

sub_437268(ecx_1, var_14_1)
return 0x8007000e
