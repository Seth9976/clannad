// 函数: sub_572920
// 地址: 0x572920
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_20 = 0x17
void lParam
LRESULT result = SendMessageA(GetDlgItem(data_1c054fc, 0x4fe4), 0xea, 0, &lParam)

if (arg1 u<= 0x65)
    result = zx.d(lookup_table_572a94[arg1])
    WPARAM var_1c
    int32_t var_18
    int32_t var_14
    int32_t var_10
    WPARAM esi_1
    
    switch (result)
        case 0
            if (var_10 s> var_1c)
                esi_1 = var_10 - 1
                goto label_5729fd
        case 1
            result = var_18 - var_14 + 1
            
            if (var_10 s< result)
                esi_1 = var_10 + 1
                goto label_5729fd
        case 2
            if (var_10 s> var_1c)
                esi_1 = var_10 - var_14
                goto label_5729fd
        case 3
            result = var_18 - var_14 + 1
            
            if (var_10 s< result)
                esi_1 = var_10 + var_14
                goto label_5729fd
        case 4
            WPARAM var_c
            esi_1 = var_c
        label_5729fd:
            
            if (esi_1 s>= var_1c)
                goto label_572a04
            
            esi_1 = var_1c
        label_572a04:
            int32_t ecx_1 = data_20f022c
            int32_t edx_1 = ecx_1 * 9
            int32_t var_38_1 = (&data_20f02bc)[edx_1]
            int32_t var_3c_1 = (&data_20f02b8)[edx_1]
            int32_t var_40_1 = (&data_20f02b4)[edx_1]
            
            if (esi_1 s> var_18 - var_14 + 1)
                esi_1 = var_18 - var_14 + 1
            
            int32_t var_44_1 = (&data_20f02b0)[edx_1]
            (&data_20f02a4)[edx_1] = esi_1
            result = sub_572570(var_18 - var_14 + 1, (&data_20f02a0)[edx_1], ecx_1, esi_1, 
                (&data_20f02a8)[edx_1], (&data_20f02ac)[edx_1], var_44_1, var_40_1, var_3c_1, 
                var_38_1, 0)
        case 5
            esi_1 = var_1c
            
            if (var_10 s> esi_1)
                goto label_572a04
        case 6
            esi_1 = var_18 - var_14 + 1
            
            if (var_10 s< esi_1)
                goto label_5729fd
        case 7
            if (var_10 s> var_1c)
                esi_1 = var_10 - arg2
                goto label_5729fd
        case 8
            result = var_18 - var_14 + 1
            
            if (var_10 s< result)
                esi_1 = var_10 + arg2
                goto label_5729fd

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
