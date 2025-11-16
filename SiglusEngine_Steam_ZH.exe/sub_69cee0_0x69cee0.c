// 函数: sub_69cee0
// 地址: 0x69cee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *arg2
int32_t eax = *arg1

if (eax s>= ecx)
    if (eax s> ecx)
        eax.b = 0
        return eax
    
    eax = arg1[1]
    int32_t ecx_1 = arg2[1]
    
    if (eax s>= ecx_1)
        if (eax s> ecx_1)
            eax.b = 0
            return eax
        
        eax = arg1[2]
        int32_t ecx_2 = arg2[2]
        
        if (eax s>= ecx_2)
            if (eax s> ecx_2)
                eax.b = 0
                return eax
            
            if (sub_69e6a0(&arg1[3], &arg2[3]) != 0)
                return 1
            
            if (sub_614c50(&arg1[3]) u<= sub_614c50(&arg2[3]))
                int32_t eax_5
                eax_5.b = arg1[4] s< arg2[4]
                return eax_5
            
            uint32_t eax_4
            eax_4.b = 0
            return eax_4

eax.b = 1
return eax
