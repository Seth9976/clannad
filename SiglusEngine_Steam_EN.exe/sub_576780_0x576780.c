// 函数: sub_576780
// 地址: 0x576780
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_106e2fc = data_72d6a8
data_106e314 = data_976fc4
data_106e318 = data_108f2d4
data_106e31c = data_108f2d8
data_106e320 = data_108f2dc
data_106e300 = data_108f2d0
data_106e304 = data_107eea4
data_106e308 = data_107ee54
data_106e30c = data_107ef98
data_106e310 = data_107ef9c
data_106e324 = data_107efa0
int32_t eax_10 = data_107efa4
data_72d6a8 = 0
int32_t i = 0
data_106e328 = eax_10
int32_t ecx_2

do
    ecx_2 = sub_5765e0(i)
    i += 1
while (i s< 0x40)

int32_t var_c = ecx_2
sub_57d530(0xffffffff)
void* i_1 = &data_8fcaec
int32_t edi = 0
void* esi = &data_1090b18

do
    if (edi u<= 0x3f)
        int32_t ecx_3 = *esi
        *(i_1 - 4) = *(esi - 4)
        *i_1 = ecx_3
    
    i_1 += 0x2d0
    edi += 1
    esi += 0x1d4
while (i_1 s< &data_907eec)

int32_t esi_1 = 0
void* edx = &data_8fcaf8

for (void* i_2 = &data_1090b60; i_2 s< 0x1098060; )
    if (esi_1 u<= 0x3f)
        int32_t eax_12 = *(i_2 - 4)
        *(edx - 8) = 1
        *(edx - 4) = eax_12
        *edx = *i_2
    
    i_2 += 0x1d4
    esi_1 += 1
    edx += 0x2d0

int32_t esi_2 = 0
void* edx_1 = &data_8fcb00
void* i_3

for (i_3 = &data_1090b68; i_3 s< 0x1098068; )
    if (esi_2 u<= 0x3f)
        int32_t ecx_4 = *(i_3 - 4)
        *(edx_1 - 0x10) = 1
        *(edx_1 - 4) = ecx_4
        *edx_1 = *i_3
    
    i_3 += 0x1d4
    esi_2 += 1
    edx_1 += 0x2d0

sub_4d1c30(i_3, &data_1333e50, 0x1be4b10, 0x19000)
sub_4d1c30(i_3, &data_1af0b10, 0x1b8c478, 0x400)
int32_t result = data_1333e48
data_1bfe01c = result
return result
