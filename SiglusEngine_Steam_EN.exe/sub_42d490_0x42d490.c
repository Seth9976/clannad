// 函数: sub_42d490
// 地址: 0x42d490
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s>= 2)
    return 

sub_42c4a0(&(&data_8c4ca4)[arg1 * 0x22], &(&data_ef08e8)[arg1 * 0x60])
int32_t eax_1 = (&data_ef08e8)[arg1 * 0x60]
int32_t ecx_3 = (&data_703020)[arg1 * 8] - (&data_8c4cfc)[arg1 * 0x22] - (&data_8c4cf4)[arg1 * 0x22]
int32_t ebx_4 = (&data_703024)[arg1 * 8] - (&data_8c4d00)[arg1 * 0x22] - (&data_8c4cf8)[arg1 * 0x22]

if (eax_1 == 1)
    *(arg1 * 0x180 + 0xef099c) = 1
    *(arg1 * 0x180 + 0xef0954) = ecx_3
    *(arg1 * 0x180 + 0xef0958) = ebx_4
else if (eax_1 == 2)
    int32_t edx_1 = data_131310c
    
    if (data_703840 != eax_1 - 2)
        (&data_ef091c)[arg1 * 0x60] = edx_1
    
    int32_t eax_2 = data_70300c
    int32_t esi_3 = data_7030dc
    
    if (arg2 != 0)
        int32_t var_20_1 = ecx_3
        sub_42f480(&(&data_ef08f8)[arg1 * 0x60], edx_1)
    
    void* var_20_2 = &(&data_ef08f8)[arg1 * 0x60]
    sub_42ff70(sub_42f850(&(&data_ef08f8)[arg1 * 0x60]), ecx_3, &(&data_ef08f8)[arg1 * 0x60], 
        ebx_4, eax_2, esi_3)
    sub_42e7a0(&(&data_ef08f8)[arg1 * 0x60])
