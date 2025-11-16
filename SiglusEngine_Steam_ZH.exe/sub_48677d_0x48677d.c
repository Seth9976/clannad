// 函数: sub_48677d
// 地址: 0x48677d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t edi
int32_t var_18 = edi
int32_t result = 1
data_b98080 = arg1
data_b9a5f0 = 1

while (true)
    uint32_t eax_4 = sub_48643c(data_b9a5e0)
    arg1.d = eax_4
    
    if (eax_4 == 0xffffffff)
        break
    
    if (_isalnum(arg1.d) == 0 && arg1.d != 0x5f && arg1.d != 0x2d)
        break
    
    int32_t eax_2 = data_b9a5f0
    
    if (eax_2 s< 0x1ff)
        (&data_b98080)[eax_2] = arg1
        data_b9a5f0 = eax_2 + 1

int32_t eax_5 = data_b9a5f0
data_b9a5f0 += 1
int32_t var_c_1 = 0
(&data_b98080)[eax_5] = 0
void* i = &data_b5627c

while (i s< 0xb562fc)
    if (2 == CompareStringA(0x409, 1, &data_b98080, 0xffffffff, *(i - 4), 0xffffffff))
        result = *i
        var_c_1 = 1
    
    i += 8
    
    if (var_c_1 != 0)
        break

if (result != 0x37)
    char* eax_8 = &data_b98080
    char i_1
    
    do
        i_1 = *eax_8
        eax_8 = &eax_8[1]
    while (i_1 != 0)
    int32_t eax_10 = _malloc(eax_8 - &data_b98080)
    data_b9a5a8 = eax_10
    
    if (eax_10 == 0)
        return 0xff
    
    int32_t esi_1
    int32_t edi_3
    edi_3, esi_1 = __builtin_memcpy(eax_10, &data_b98080, (eax_8 - &data_b98080) u>> 2 << 2)
    __builtin_memcpy(edi_3, esi_1, (eax_8 - &data_b98080) & 3)

if (arg1.d == 0xffffffff)
label_48689a:
    
    if (arg1.d == 0xa)
        data_b562f8 += 1
else
    if (_isspace(arg1.d) != 0)
        goto label_48689a
    
    (*(**(data_b9a5e0 + 0xc) + 8))()

return result
