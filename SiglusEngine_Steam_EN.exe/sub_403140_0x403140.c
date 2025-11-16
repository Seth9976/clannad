// 函数: sub_403140
// 地址: 0x403140
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* esi = *(arg1 + 0x1c)

if (esi != 0)
    int32_t i = 0
    
    if (*(esi + 8) s> 0)
        void* ebp_1 = esi + 0x20
        
        do
            int32_t eax_1 = *ebp_1
            
            if (eax_1 != 0)
                _free(eax_1)
            
            i += 1
            ebp_1 += 4
        while (i s< *(esi + 8))
    
    int32_t i_1 = 0
    
    if (*(esi + 0xc) s> 0)
        void* ebx_1 = esi + 0x220
        
        do
            (*((&data_632fd4)[*(ebx_1 - 0x100)] + 8))(*ebx_1)
            i_1 += 1
            ebx_1 += 4
        while (i_1 s< *(esi + 0xc))
    
    int32_t i_2 = 0
    
    if (*(esi + 0x10) s> 0)
        void* ebx_2 = esi + 0x420
        
        do
            (*((&data_632fc0)[*(ebx_2 - 0x100)] + 0xc))(*ebx_2)
            i_2 += 1
            ebx_2 += 4
        while (i_2 s< *(esi + 0x10))
    
    int32_t i_3 = 0
    
    if (*(esi + 0x14) s> 0)
        void* ebx_3 = esi + 0x620
        
        do
            (*((&data_632fc8)[*(ebx_3 - 0x100)] + 0xc))(*ebx_3)
            i_3 += 1
            ebx_3 += 4
        while (i_3 s< *(esi + 0x14))
    
    int32_t i_4 = 0
    
    if (*(esi + 0x18) s> 0)
        void* edi_1 = nullptr
        void* ebp_2 = esi + 0x720
        
        do
            void* eax_13 = *ebp_2
            
            if (eax_13 != 0)
                sub_407820(eax_13)
            
            int32_t eax_14 = *(esi + 0xb20)
            
            if (eax_14 != 0)
                sub_407840(edi_1 + eax_14)
            
            i_4 += 1
            ebp_2 += 4
            edi_1 += 0x2c
        while (i_4 s< *(esi + 0x18))
    
    int32_t eax_16 = *(esi + 0xb20)
    
    if (eax_16 != 0)
        _free(eax_16)
    
    int32_t i_5 = 0
    
    if (*(esi + 0x1c) s> 0)
        void* ebp_3 = esi + 0xb24
        
        do
            sub_404a10(*ebp_3)
            i_5 += 1
            ebp_3 += 4
        while (i_5 s< *(esi + 0x1c))
    
    _free(esi)

__builtin_memset(arg1, 0, 0x20)
return 0
