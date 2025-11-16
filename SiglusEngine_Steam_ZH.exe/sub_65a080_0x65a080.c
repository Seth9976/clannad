// 函数: sub_65a080
// 地址: 0x65a080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* edi = data_bac504

if (arg1[4] == 0)
    void** eax
    eax.b = 0
    return eax

sub_532870(edi + 0x68, arg1, 0, 0xffffffff)

if (*(edi + 0x78) s> 0x100)
    int32_t ecx_2 = *(edi + 0x78)
    
    if (ecx_2 u< 0x100)
        sub_55d330(edi + 0x68, 0x100 - ecx_2, 0)
    else
        bool cond:0_1 = *(edi + 0x7c) u< 8
        *(edi + 0x78) = 0x100
        
        if (cond:0_1)
            *(edi + 0x268) = 0
        else
            *(*(edi + 0x68) + 0x200) = 0

sub_532870(edi + 0x80, arg1, 0, 0xffffffff)

if (*(edi + 0x90) s> 0x100)
    int32_t ecx_5 = *(edi + 0x90)
    
    if (ecx_5 u< 0x100)
        sub_55d330(edi + 0x80, 0x100 - ecx_5, 0)
    else
        bool cond:1_1 = *(edi + 0x94) u< 8
        *(edi + 0x90) = 0x100
        
        if (cond:1_1)
            *(edi + 0x280) = 0
        else
            *(*(edi + 0x80) + 0x200) = 0

int32_t* eax_7

if (*data_bac4a0 != 0)
    eax_7 = *(edi + 0xb8)
    
    if (eax_7 s>= 0)
        void* ecx_8 = eax_7 * 0xbc + *(edi + 0xe0) + 0x6c
        
        if (ecx_8 != edi + 0x68)
            sub_52e3c0(ecx_8, edi + 0x68, 0, 0xffffffff)
        
        int32_t* ecx_11 = *(edi + 0xb8) * 0xbc + 0x84 + *(edi + 0xe0)
        
        if (ecx_11 != edi + 0x80)
            sub_52e3c0(ecx_11, edi + 0x80, 0, 0xffffffff)
        
        *(edi + 0xd0) = 1

eax_7.b = 1
return eax_7
