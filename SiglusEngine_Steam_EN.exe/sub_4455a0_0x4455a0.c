// 函数: sub_4455a0
// 地址: 0x4455a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_12dc2c4 == 0)
    return 

int32_t esi_1 = data_703180:4
void* eax
char* ecx_1
eax, ecx_1 = sub_4c3da0(eax, 5, &data_12dc2c4, 0x18)

if (eax != 1)
    if (esi_1 != 0xffffffff)
        eax, ecx_1 = sub_4c51f0(eax, &data_12dc2c4, esi_1, nullptr)
    
    if (esi_1 != 0xffffffff && eax != 0)
        goto label_445615
    
    if (data_702fc0 == 0)
        char* var_10_1 = &data_12dc2c4
        sub_4c84d0(&data_7027c0, 0x616a68)
        return sub_446a50() __tailcall
    
    return 

label_445615:
char* var_10_2 = ecx_1
int32_t var_14_1 = 0x18
sub_4c5340(eax, &data_12dc2c4, data_703180:4, &data_1393180, &data_1393184, ecx_1)

if (data_1393180 == 0)
    return 

void* esi_2 = data_1393184
data_1393188 = esi_2
void* ecx_5 = esi_2 + 0x20
data_139318c = ecx_5
int32_t edi_1 = *(esi_2 + 0x10)
void* ebx_1 = *(esi_2 + 0x14)

if (edi_1 s<= 0)
    return 

int32_t edx_2 = 0

while (true)
    *(edx_2 + ecx_5 + 8) += ebx_1 + esi_2
    edx_2 += 0xc
    int32_t temp0_1 = edi_1
    edi_1 -= 1
    
    if (temp0_1 == 1)
        break
    
    ecx_5 = data_139318c
