// 函数: sub_10003c09
// 地址: 0x10003c09
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t eax = DecodePointer(data_1001c590)
int32_t* esi = data_1001aa40

if (esi != 0)
    while (*esi != 0)
        _free(*esi)
        int32_t* temp1_1 = esi
        esi = &esi[1]
        
        if (temp1_1 == 0xfffffffc)
            break
    
    esi = data_1001aa40

_free(esi)
int32_t* esi_1 = data_1001aa3c
data_1001aa40 = 0

if (esi_1 != 0)
    while (*esi_1 != 0)
        _free(*esi_1)
        int32_t* temp2_1 = esi_1
        esi_1 = &esi_1[1]
        
        if (temp2_1 == 0xfffffffc)
            break
    
    esi_1 = data_1001aa3c

_free(esi_1)
int32_t var_14 = data_1001aa38
data_1001aa3c = 0
_free(var_14)
_free(data_1001aa34)
data_1001aa38 = 0
data_1001aa34 = 0

if (eax != 0xffffffff && data_1001c590 != 0)
    _free(eax)

data_1001c590 = EncodePointer(0xffffffff)
int32_t eax_2 = data_1001b478

if (eax_2 != 0)
    _free(eax_2)
    data_1001b478 = 0

int32_t eax_3 = data_1001b47c

if (eax_3 != 0)
    _free(eax_3)
    data_1001b47c = 0

void* result = data_10017aec
int32_t esi_2 = *result
*result -= 1

if (esi_2 == 1)
    result = data_10017aec
    
    if (result != &data_100178c8)
        result = _free(result)
        data_10017aec = &data_100178c8

return result
