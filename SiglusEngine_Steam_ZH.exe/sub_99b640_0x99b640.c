// 函数: sub_99b640
// 地址: 0x99b640
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = arg1
void* esi = *(result + 0x1c)

if (esi != 0)
    void* i = nullptr
    
    if (*(esi + 8) s> 0)
        void* ebx_1 = esi + 0x20
        
        do
            int32_t eax = *ebx_1
            
            if (eax != 0)
                _free(eax)
            
            i += 1
            ebx_1 += 4
        while (i s< *(esi + 8))
    
    int32_t i_1 = 0
    
    if (*(esi + 0xc) s> 0)
        i = esi + 0x220
        
        do
            int32_t ecx_1 = *i
            
            if (ecx_1 != 0)
                (*(&data_adde04)[*(i - 0x100)])[2](ecx_1)
            
            i_1 += 1
            i += 4
        while (i_1 s< *(esi + 0xc))
    
    int32_t i_2 = 0
    
    if (*(esi + 0x10) s> 0)
        i = esi + 0x420
        
        do
            int32_t ecx_2 = *i
            
            if (ecx_2 != 0)
                (*(&data_adde08)[*(i - 0x100)])[3](ecx_2)
            
            i_2 += 1
            i += 4
        while (i_2 s< *(esi + 0x10))
    
    if (*(esi + 0x14) s> 0)
        i = esi + 0x620
        int32_t i_3 = 0
        
        do
            int32_t ecx_3 = *i
            
            if (ecx_3 != 0)
                (*((&data_addf44)[*(i - 0x100)] + 0xc))(ecx_3)
            
            i_3 += 1
            i += 4
        while (i_3 s< *(esi + 0x14))
    
    int32_t i_4 = 0
    
    if (*(esi + 0x18) s> 0)
        void* ecx_4 = nullptr
        void* eax_10 = esi + 0x720
        void* var_8_1 = nullptr
        void* var_c_1 = eax_10
        
        do
            void* edi_2 = *eax_10
            
            if (edi_2 != 0 && *(edi_2 + 0x24) != 0)
                int32_t eax_11 = *(edi_2 + 0x20)
                
                if (eax_11 != 0)
                    _free(eax_11)
                
                int32_t eax_12 = *(edi_2 + 8)
                
                if (eax_12 != 0)
                    _free(eax_12)
                
                __builtin_memset(edi_2, 0, 0x28)
                _free(edi_2)
                ecx_4 = var_8_1
            
            int32_t eax_13 = *(esi + 0xb20)
            
            if (eax_13 != 0)
                char* edi_3 = ecx_4 + eax_13
                int32_t eax_14 = *(edi_3 + 0x10)
                
                if (eax_14 != 0)
                    _free(eax_14)
                
                int32_t eax_15 = *(edi_3 + 0x14)
                
                if (eax_15 != 0)
                    _free(eax_15)
                
                int32_t eax_16 = *(edi_3 + 0x18)
                
                if (eax_16 != 0)
                    _free(eax_16)
                
                int32_t eax_17 = *(edi_3 + 0x1c)
                
                if (eax_17 != 0)
                    _free(eax_17)
                
                int32_t eax_18 = *(edi_3 + 0x20)
                
                if (eax_18 != 0)
                    _free(eax_18)
                
                _memset(edi_3, 0, 0x38)
                ecx_4 = var_8_1
            
            i_4 += 1
            eax_10 = var_c_1 + 4
            ecx_4 += 0x38
            var_c_1 = eax_10
            var_8_1 = ecx_4
        while (i_4 s< *(esi + 0x18))
    
    int32_t eax_20 = *(esi + 0xb20)
    
    if (eax_20 != 0)
        _free(eax_20)
    
    int32_t i_5 = 0
    
    if (*(esi + 0x1c) s> 0)
        void* eax_21 = esi + 0xb24
        void* var_c_2 = eax_21
        
        do
            char* edi_4 = *eax_21
            
            if (edi_4 != 0)
                _memset(edi_4, 0, 0x208)
                _free(edi_4)
                eax_21 = var_c_2
            
            i_5 += 1
            eax_21 += 4
            var_c_2 = eax_21
        while (i_5 s< *(esi + 0x1c))
    
    _free(esi)
    result = arg1

__builtin_memset(result, 0, 0x20)
return result
