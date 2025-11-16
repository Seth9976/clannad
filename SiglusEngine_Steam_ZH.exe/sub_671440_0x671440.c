// 函数: sub_671440
// 地址: 0x671440
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char eax = sub_620a70()
void* edx = data_bac458

if (eax == 0 || *(edx + 0x141) != 0)
    int32_t result
    
    if (*(data_bac4a0 + 0xcc) != 0)
        result.b = 0
    else if (*(data_bac484 + 0x138) == 0)
        result.b = *(data_bac498 + 2) == 0
    else
        result.b = 0
    
    void* ecx_1 = data_bac4c8
    void* ecx_2
    
    if (*(ecx_1 + 0x14) != 2)
        if (*(ecx_1 + 0x51c) == 2)
            if (result.b == 0 || *(edx + 0x39b) == 0)
                ecx_2 = ecx_1 + 0x510
                goto label_6714af
            
            result.b = 0
            return result
        
        if (*(ecx_1 + 0x1c8c) != 2 || (result.b != 0 && *(edx + 0x3e6) != 0))
            result.b = 0
            return result
        
        if (sub_6b1fd0(ecx_1 + 0x1c80).b == 0)
            result.b = 0
            return result
    else
        if (result.b != 0)
            if (sub_634fe0().b != 0)
                result.b = 0
                return result
            
            ecx_1 = data_bac4c8
        
        ecx_2 = ecx_1 + 8
    label_6714af:
        
        if (sub_6b1fd0(ecx_2).b == 0)
            result.b = 0
            return result

sub_676760()
int32_t eax_1
eax_1.b = 1
return 1
