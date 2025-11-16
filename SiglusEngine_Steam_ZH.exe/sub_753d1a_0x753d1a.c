// 函数: sub_753d1a
// 地址: 0x753d1a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* ecx = arg1
int16_t* eax = ecx

if (*ecx != 0)
    int16_t i_1 = *arg2
    
    do
        int16_t* esi_1 = arg2
        
        if (i_1 != 0)
            int16_t i = i_1
            
            do
                if (i == *eax)
                    return (eax - ecx) s>> 1
                
                esi_1 = &esi_1[1]
                i = *esi_1
            while (i != 0)
        
        eax = &eax[1]
    while (*eax != 0)

return (eax - ecx) s>> 1
