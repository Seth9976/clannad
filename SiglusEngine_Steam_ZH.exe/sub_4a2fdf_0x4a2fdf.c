// 函数: sub_4a2fdf
// 地址: 0x4a2fdf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t i = 0
int32_t edi
int32_t var_18 = edi

if (*(arg1 + 4) u> 0)
    do
        void* eax_2 = *(*(arg1 + 0x10) + (i << 2))
        int32_t esi_1 = *(eax_2 + 4)
        
        if ((esi_1 & arg3) == arg3 && (arg4 & esi_1) == 0)
            *(eax_2 + 8) = 0
        
        i += 1
    while (i u< *(arg1 + 4))

int32_t i_1 = 0

if (*(arg1 + 8) u> 0)
    do
        void* edx = *(*(arg1 + 0x14) + (i_1 << 2))
        void* eax_5 = *(*(arg1 + 0x10) + (*(edx + 4) << 2))
        int32_t esi_3 = *(eax_5 + 4)
        
        if ((esi_3 & arg3) == arg3 && (arg4 & esi_3) == 0)
            int32_t edx_2 = *(edx + 0xc) + 1
            
            if (*(eax_5 + 8) u<= edx_2)
                *(eax_5 + 8) = edx_2
        
        i_1 += 1
    while (i_1 u< *(arg1 + 8))

int32_t i_2 = 0
int32_t esi_4 = 0
int32_t var_c_1 = 0

if (*(arg1 + 4) u> 0)
    do
        void* eax_7 = *(*(arg1 + 0x10) + (i_2 << 2))
        int32_t edx_3 = *(eax_7 + 4)
        
        if ((edx_3 & arg3) == arg3 && (arg4 & edx_3) == 0)
            *(eax_7 + 0x10) = esi_4
            *(eax_7 + 0x18) = arg2
            
            if ((edx_3:1.b & 4) != 0)
                var_c_1 = 1
            
            esi_4 += *(eax_7 + 8)
            *(eax_7 + 8) = 0
        
        i_2 += 1
    while (i_2 u< *(arg1 + 4))

int32_t i_3 = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_9 = *(*(arg1 + 0x14) + (i_3 << 2))
        void* edx_6 = *(*(arg1 + 0x10) + (*(eax_9 + 4) << 2))
        
        if ((*(edx_6 + 4) & arg3) == arg3 && (arg4 & *(edx_6 + 4)) == 0)
            *(eax_9 + 4) = *(edx_6 + 0x18)
            *(eax_9 + 0xc) += *(edx_6 + 0x10)
        
        i_3 += 1
    while (i_3 u< *(arg1 + 8))

int32_t eax_12 = arg2 << 2
*(*(eax_12 + *(arg1 + 0x10)) + 8) = esi_4

if (var_c_1 != 0)
    void* eax_13 = *(eax_12 + *(arg1 + 0x10))
    *(eax_13 + 5) |= 4

return 0
