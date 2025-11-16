// 函数: sub_41627d
// 地址: 0x41627d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t var_c = arg1
int32_t edi
int32_t var_14 = edi
sub_416469()
int32_t arg_4

if (arg_4 == 0)
    data_b4e30c = 0xffff
    __builtin_memcpy(&data_b4d398, &data_b4d4c0, 0x128)
else if (data_b4e30c == 0xffff)
    data_b4e30c = 0
    __builtin_memcpy(&data_b4d398, &data_b4d4c0, 0x128)
    sub_464758(&data_b4d398)
    int32_t var_1c_1 = 4
    int32_t* var_20_1 = &arg_4
    int32_t eax_1
    HKEY ecx
    eax_1, ecx = sub_416093(sub_464437, REG_DWORD, "DisablePSGP")
    
    if (eax_1 == 0)
        arg_4 &= eax_1
    
    int32_t var_1c_2 = 4
    int32_t* var_20_2 = &var_8
    int32_t eax_2
    int32_t ecx_1
    eax_2, ecx_1 = sub_416093(ecx, REG_DWORD, "DisableD3DXPSGP")
    
    if (eax_2 != 0)
        arg_4 = var_8
    
    if (arg_4 != 1)
        if (arg_4 == 2)
        label_416345:
            int32_t eax_6 = sub_4161cc(ecx_1) & 8
            int32_t var_c_1 = eax_6
            
            if (eax_6 == 0)
                if (IsProcessorFeaturePresent(PF_XMMI_INSTRUCTIONS_AVAILABLE) != 0)
                    sub_463c3f(&data_b4d398)
                    data_b4e30c = 3
            else
                sub_463db2(&data_b4d398)
                data_b4e30c = 2
        else
            BOOL eax_4
            eax_4, ecx_1 = IsProcessorFeaturePresent(PF_3DNOW_INSTRUCTIONS_AVAILABLE)
            
            if (eax_4 == 0)
                goto label_416345
            
            sub_464011(&data_b4d398)
            data_b4e30c = 1

return data_b4e30c
