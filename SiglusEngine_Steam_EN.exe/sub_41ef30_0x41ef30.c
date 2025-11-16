// 函数: sub_41ef30
// 地址: 0x41ef30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* esi = &data_1357040
int32_t i = 0
void* edi = &data_108fec4
int32_t* var_8_1 = &data_1357040

do
    if (*edi != 0)
        int32_t eax_1 = sub_41f150(i, nullptr)
        
        if (eax_1 == 1)
            sub_427370(eax_1, edi, &esi[-4], 0xffffffff, 0, eax_1, 0, nullptr, eax_1, 0)
            
            if (esi[-4] != 0)
                BOOL* esi_1 = *esi
                int32_t var_18_1 = 1
                int32_t temp0_1 = divs.dp.d(sx.q(var_8_1[-1]), esi_1)
                sub_423d30(temp0_1, 0, &esi[-4], &esi[-4], temp0_1, 0, 0, esi_1, esi_1, 0, nullptr)
                esi = var_8_1
        else if (data_702fc0 == 0)
            void* var_18_2 = edi
            int32_t i_1 = i
            sub_4c84d0(&data_7027c0, 0x613d30)
            
            if (data_702fc0 != 0 || data_641ad0 s< 6)
                MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
                data_641ad0 += 1
    
    esi = &esi[6]
    i += 1
    edi += 0x24
    var_8_1 = esi
while (i s< 8)

int32_t result = 0
data_1357024 = 0

if (data_1357030 != 0 && data_135703c s> 0)
    if (data_1357040 s> 0)
        result = 1
    
    data_1357024 = result

if (data_1357048 != 0 && data_1357054 s> 0)
    if (data_1357058 s> 0)
        result = 2
    
    data_1357024 = result

if (data_1357060 != 0 && data_135706c s> 0)
    if (data_1357070 s> 0)
        result = 3
    
    data_1357024 = result

if (data_1357078 != 0 && data_1357084 s> 0)
    if (data_1357088 s> 0)
        result = 4
    
    data_1357024 = result

if (data_1357090 != 0 && data_135709c s> 0)
    if (data_13570a0 s> 0)
        result = 5
    
    data_1357024 = result

if (data_13570a8 != 0 && data_13570b4 s> 0)
    if (data_13570b8 s> 0)
        result = 6
    
    data_1357024 = result

if (data_13570c0 != 0 && data_13570cc s> 0)
    if (data_13570d0 s> 0)
        result = 7
    
    data_1357024 = result

if (data_13570d8 != 0 && data_13570e4 s> 0)
    if (data_13570e8 s> 0)
        result = 8
    
    data_1357024 = result

return result
