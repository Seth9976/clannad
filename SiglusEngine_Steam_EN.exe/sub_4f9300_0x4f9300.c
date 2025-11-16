// 函数: sub_4f9300
// 地址: 0x4f9300
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = data_1bfdd30
int32_t esi
int32_t edi
int32_t var_e8

if (eax_2 s> 0xaf1)
    if (eax_2 s> 0xed9)
        if (eax_2 != 0xeda)
            edi = var_e8
            esi = var_e8
        else
            edi = 2
            esi = 1
    else if (eax_2 == 0xed9)
        edi = 1
        esi = 1
    else if (eax_2 == 0xaf2)
        edi = 2
        esi = 0
    else if (eax_2 != 0xed8)
        edi = var_e8
        esi = var_e8
    else
        edi = 0
        esi = 1
else if (eax_2 == 0xaf1)
    edi = 1
    esi = 0
else if (eax_2 s> 0x805)
    if (eax_2 != 0xaf0)
        edi = var_e8
        esi = var_e8
    else
        edi = 0
        esi = 0
else if (eax_2 == 0x805)
    edi = 2
    esi = 0
else if (eax_2 == 0x803)
    edi = 0
    esi = 0
else if (eax_2 != 0x804)
    edi = var_e8
    esi = var_e8
else
    edi = 1
    esi = 0
int32_t var_e0 = 0
sub_4ef190(arg2 + 0x20, arg2 + 0x20, *(arg2 + 0x20), "$@", &data_1b8a720)
int32_t eax_6 = data_1b8a720
int32_t ecx_2
int32_t var_d8

if (eax_6 s< 0 || eax_6 s>= 8)
    ecx_2 = var_d8
    var_e0 = 1
else
    int32_t ecx_1 = (&data_8d02b4)[(esi + (eax_6 << 1)) * 0xb20]
    
    if (ecx_1 == 1 || ecx_1 == 2 || ecx_1 == 3)
        if ((&data_8d02bc)[(esi + (eax_6 << 1)) * 0xb20] == 0)
            ecx_2 = var_d8
            var_e0 = 1
        else
            ecx_2 = *((esi + (eax_6 << 1)) * 0x2c80 + 0x8d2f18)
    else if (ecx_1 != 4 || (&data_8d02bc)[(esi + (eax_6 << 1)) * 0xb20] == 0)
        ecx_2 = var_d8
        var_e0 = 1
    else
        ecx_2 = *((esi + (eax_6 << 1)) * 0x2c80 + 0x8d2f18)
int32_t result = data_1b8c884
int32_t var_d0 = 0
char* var_cc = nullptr
int32_t var_bc = 0
int32_t var_b8 = 0
int32_t var_a8 = 0
int32_t var_a4 = 0
int32_t var_94 = 0
int32_t var_90 = 0
int32_t var_80 = 0
int32_t var_7c = 0
int32_t var_6c = 0
int32_t var_68 = 0
int32_t var_58 = 0
int32_t var_54 = 0
int32_t var_44 = 0
int32_t var_40 = 0
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_d8_1 = 0

if (result s> 0)
    int32_t var_e4_1 = ecx_2 * 0x2c
    int32_t ecx_12
    
    do
        void var_d4
        sub_4ef190(arg2 + 0x20, arg2 + 0x20, *(arg2 + 0x20), "S$", &var_d4)
        
        if (var_e0 == 0)
            int32_t ecx_5 = data_1b8a720
            int32_t var_ec
            
            if (edi == 0)
                int32_t var_100_3 = 1
                var_ec = sub_499a90(edi, var_cc, 0xffffffff, 1, 1)
            else
                int32_t eax_13 = edi - 1
                
                if (edi == 1)
                    int32_t var_100_2 = 1
                    var_ec = sub_499a90(eax_13, var_cc, 0xffffffff, 0, 1)
                else if (eax_13 == 1)
                    var_ec = 0xffffffff
            
            if (ecx_5 u<= 7 && esi u<= 1 && var_d8_1 + ecx_2 u<= 0xff)
                *(var_e4_1 + &(&data_8d02b4)[(esi + (ecx_5 << 1)) * 0xb20] + 0x64) = var_ec
                int32_t var_c0
                *(var_e4_1 + &(&data_8d02b4)[(esi + (ecx_5 << 1)) * 0xb20] + 0x68) = var_c0
                void* ecx_8 = &(&data_8d02b4)[(esi + (ecx_5 << 1)) * 0xb20] + var_e4_1 + 0x6c
                
                if (var_cc == 0)
                    sub_4d1ba0(var_e4_1 + 0x6c, 0x24, ecx_8, 0)
                else
                    sub_4cfd70(ecx_8, var_cc)
                
                int32_t eax_24 = esi + (ecx_5 << 1)
                (&data_20f0094)[eax_24] += 1
        
        sub_4eef40(&var_d4, 0xa)
        var_e4_1 += 0x2c
        ecx_12 = var_d8_1 + 1
        result = data_1b8c884
        var_d8_1 = ecx_12
    while (ecx_12 s< result)

*(arg2 + 0x20) += 1

if (var_e0 == 0)
    int32_t eax_25 = result + ecx_2
    result = sub_49aeb0(eax_25, esi, data_1b8a720, eax_25)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
