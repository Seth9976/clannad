// 函数: sub_5adca0
// 地址: 0x5adca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg2

if (ebx == *(arg1 + 0xb8))
    return 

*(arg1 + 0xb8) = ebx
sub_5add90(arg1)
int32_t eax_1
int32_t edx_1
edx_1:eax_1 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
int32_t i_1 = 0
int32_t edx_2 = edx_1 s>> 8

if ((edx_2 u>> 0x1f) + edx_2 s> 0)
    int32_t eax_5 = 0
    arg2 = 0
    int32_t edx_4
    int32_t i
    
    do
        void* esi_2 = *(arg1 + 0xa4) + eax_5
        
        if (ebx != *(esi_2 + 0x25c))
            *(esi_2 + 0x25c) = ebx
            sub_5b2ab0(esi_2)
            bool cond:1_1 = *(esi_2 + 0x2a4) u< 8
            void* eax_6 = esi_2 + 0x290
            *(eax_6 + 0x10) = 0
            
            if (not(cond:1_1))
                eax_6 = *eax_6
            
            *eax_6 = 0
            eax_5 = arg2
            *(esi_2 + 0x2a8) = 1
        
        arg2 = eax_5 + 0x580
        i = i_1 + 1
        i_1 = i
        int32_t eax_8
        int32_t edx_3
        edx_3:eax_8 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
        edx_4 = edx_3 s>> 8
        eax_5 = arg2
    while (i s< (edx_4 u>> 0x1f) + edx_4)

sub_5adbb0(arg1)
