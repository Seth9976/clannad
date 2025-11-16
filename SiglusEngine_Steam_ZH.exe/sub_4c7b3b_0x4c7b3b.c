// 函数: sub_4c7b3b
// 地址: 0x4c7b3b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg2
int32_t edi
int32_t var_10 = edi
*arg3 = 0

while (true)
    int32_t eax
    eax.b = *esi
    
    if (eax.b == 0)
        return 0x80004005
    
    int32_t eax_1 = sx.d(eax.b)
    
    while (_isalnum(eax_1) == 0)
        esi = &esi[1]
        eax_1 = sx.d(*esi)
    
    if (_tolower(sx.d(*esi)) == sx.d(arg4))
        void* edx_1 = nullptr
        
        if (*arg3 == 0)
            *arg3 = esi
            return 0
        
        int32_t i_2 = *(arg1 + 8)
        
        if (i_2 u> 0)
            int32_t* eax_5 = *(arg1 + 0x14)
            int32_t i_1 = i_2
            int32_t i
            
            do
                void* ecx_2 = *eax_5
                
                if (*(ecx_2 + 4) == arg5)
                    edx_1 = ecx_2
                
                eax_5 = &eax_5[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        void* const eax_6
        
        if (i_2 u<= 0 || edx_1 == 0)
            eax_6 = nullptr
        else
            eax_6 = *(edx_1 + 0x60)
        
        sub_4a4100(arg1, eax_6, 0x119d, 
            "cannot bind the same variable to multiple constants in the same constant bank")
        return 0x80004005
    
    while (_isalnum(sx.d(*esi)) != 0)
        esi = &esi[1]
