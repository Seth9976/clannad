// 函数: sub_4c1911
// 地址: 0x4c1911
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
int32_t i_2 = *(esi + 8)
int32_t ebx = 0
int32_t edi
int32_t var_20 = edi

if (i_2 u> 0)
    arg1 = *(esi + 0x14)
    int32_t i_1 = i_2
    int32_t i
    
    do
        void* eax = *arg1
        
        if (*(esi + 0x88) == *(eax + 4))
            int32_t eax_1 = *(eax + 0xc)
            
            if (eax_1 u>= ebx)
                ebx = eax_1 + 1
        
        arg1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t edi_1 = 0

while (true)
    void* var_24_1 = arg1
    void* var_28_1 = arg1
    var_28_1.q = fconvert.d(float.t(0))
    int32_t eax_2
    eax_2, arg1 = sub_49f544(esi, *(esi + 0x88), ebx, edi_1, var_28_1)
    int32_t var_14[0x4]
    var_14[edi_1] = eax_2
    
    if (eax_2 == 0xffffffff)
        break
    
    edi_1 += 1
    
    if (edi_1 u>= 4)
        void* eax_3 = sub_49ec23(0x74)
        int32_t* eax_4
        
        if (eax_3 == 0)
            eax_4 = nullptr
        else
            eax_4 = sub_49e789(eax_3)
        
        void** edi_2 = arg2
        *edi_2 = eax_4
        
        if (eax_4 == 0)
            break
        
        void** eax_5 = sub_49ec6e(eax_4, (arg3 & 0xfffff) | 0x10000000, arg3, arg3, 0)
        void* ecx_6 = *edi_2
        arg2 = eax_5
        
        if (eax_5 s>= 0)
            void** eax_6 = sub_49e7bf(ecx_6, *(esi + 0x100))
            arg2 = eax_6
            
            if (eax_6 s>= 0)
                void* eax_7 = nullptr
                arg2 = nullptr
                
                if (arg3 u> 0)
                    do
                        int32_t eax_8 = eax_7 << 2
                        int32_t ecx_7 = var_14[eax_7]
                        *(eax_8 + *(*edi_2 + 8)) = ecx_7
                        *(eax_8 + *(*edi_2 + 0x10)) = *(eax_8 + *(*(esi + 0x100) + 0x10))
                        *(eax_8 + *(*(esi + 0x100) + 0x10)) = ecx_7
                        eax_7 = arg2 + 1
                        arg2 = eax_7
                    while (eax_7 u< arg3)
                
                return nullptr
            
            ecx_6 = *edi_2
        
        if (ecx_6 != 0)
            sub_46cb59(ecx_6, 1)
        
        return arg2

return 0x8007000e
