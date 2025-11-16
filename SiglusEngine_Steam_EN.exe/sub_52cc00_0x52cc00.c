// 函数: sub_52cc00
// 地址: 0x52cc00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_e4 = edi
void* ebx = arg1

if (data_1311178 == 0)
    data_1606d78 = 1
    data_1606c68 = 1

arg1.b = 0
sub_420350(arg1)
sub_542980(*(ebx + 0x13b3c))
int32_t eax_2 = *(ebx + 0x13b3c)

if (eax_2 == 0xffffffff)
    void* eax_3 = &data_8fcb20
    int32_t i_2 = 0x40
    int32_t i
    
    do
        *eax_3 = 0
        eax_3 += 0x2d0
        i = i_2
        i_2 -= 1
    while (i != 1)
else if (eax_2 u<= 0x3f)
    *(eax_2 * 0x2d0 + &data_8fcb20) = 0

int32_t result = data_1b8c884

if (result != 0)
    *(arg2 + 0x20) += 1
    int32_t i_1 = 0
    int32_t var_d0_1 = 0
    int32_t var_cc_1 = 0
    int32_t var_bc_1 = 0
    int32_t var_b8_1 = 0
    int32_t var_a8_1 = 0
    int32_t var_a4_1 = 0
    int32_t var_94_1 = 0
    int32_t var_90_1 = 0
    int32_t var_80_1 = 0
    int32_t var_7c_1 = 0
    int32_t var_6c_1 = 0
    int32_t var_68_1 = 0
    int32_t var_58_1 = 0
    int32_t var_54_1 = 0
    int32_t var_44_1 = 0
    int32_t var_40_1 = 0
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    
    if (result s> 0)
        do
            int32_t var_d4
            sub_4ef440(&var_d4, arg2 + 0x20, *(arg2 + 0x20), "$@", &var_d4)
            int32_t eax_6 = var_d4
            
            if (eax_6 == 0xffffffff)
                eax_6 = *(ebx + 0x13b3c)
            
            if (eax_6 u<= 0x3f)
                *(eax_6 * 0x3920 + &data_f8c794) = 0
                *(eax_6 * 0x3920 + 0xf8c784) = 0
                *(eax_6 * 0x2d0 + &data_8fcb1c) = 2
            
            sub_4eef40(&var_d4, 0xa)
            result = *(arg2 + 0x20)
            
            while (true)
                char ecx_7 = *result
                
                if (ecx_7 != 0x2c && ecx_7 != 0x20)
                    break
                
                result += 1
            
            i_1 += 1
            *(arg2 + 0x20) = result
        while (i_1 s< data_1b8c884)
    
    *(arg2 + 0x20) += 1
else
    result = *(ebx + 0x13b3c)
    
    if (result u<= 0x3f)
        void* ecx_2 = result * 0x3920 + &data_f89afc
        result *= 0x2d0
        *(ecx_2 + 0x2c88) = 0
        *(ecx_2 + 0x2c98) = 0
        *(result + &data_8fcb1c) = 2

bool cond:1 = data_13132dc == 0
data_1af1714 = 0
data_187c51f = 0
data_1af1710 = 0
data_187c51e = 0
data_187c51d = 0

if (cond:1 || data_1b1bcd8 != 0)
    int32_t esi_1 = data_63e16c
    
    if (esi_1 u<= 0x3f)
        WaitForSingleObject(data_641b54, 0xffffffff)
        int32_t edx_2 = esi_1 * 0x180
        
        if (*(edx_2 + 0x208cd90) != 2)
            if (data_641b5c != 0 && (&data_208cd58)[esi_1 * 0x60] != 0
                    && (&data_208cd54)[esi_1 * 0x60] != 0)
                int32_t ecx_8 = *(edx_2 + 0x208cdac)
                *(edx_2 + 0x208ce94) = data_1392ccc
                *(edx_2 + 0x208ce88) = ecx_8
                *(edx_2 + 0x208ce7c) = 0
                *(edx_2 + 0x208ce80) = ecx_8
                *(edx_2 + 0x208cea0) = 2
                *(edx_2 + 0x208ce9c) = 0x64
                *(edx_2 + 0x208ce98) = 0
                *(edx_2 + 0x208ce8c) = 0
                *(edx_2 + 0x208ce90) = 0
                *(edx_2 + 0x208ce84) = 0
                *(edx_2 + 0x208cd90) = 1
            
            *(edx_2 + 0x208cd90) = 2
        
        ReleaseSemaphore(data_641b54, 1, nullptr)
    
    WaitForSingleObject(data_702788, 0xffffffff)
    BOOL eax_9
    
    if (esi_1 s< 0)
        eax_9 = ReleaseSemaphore(data_702788, 1, nullptr)
    else
        eax_9 = sub_4cb9c0(esi_1, 0x64)
    
    result = sub_4d1ba0(sub_4d1ba0(eax_9, 0x24, 0x976380, 0), 0x24, 0x9763a8, 0)
    data_9763a4 = 0xffffffff
    data_1393190 = 0

data_1af0f3c = 0xffffffff
data_1370100 = 0xffffffff
data_703660 = 0xffffffff
data_1af17ac = 0
data_1333e48 = 1
data_1af178c = 0
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
