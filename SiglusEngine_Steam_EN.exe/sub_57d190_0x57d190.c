// 函数: sub_57d190
// 地址: 0x57d190
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_137408c
void* eax = arg1
int32_t ecx = 0
void* var_8 = eax
int32_t esi = 0x96
int32_t edx_2

if (edx == 0)
    edx_2 = 0
    
    if (data_1374088 == 1)
        edx_2 = 0x96
else
    double xmm1_2 = _mm_cvtepi32_pd(zx.q(edx))
    int32_t eax_1 = data_1374094
    int32_t eax_3
    int16_t x87control
    int80_t st0_1
    uint64_t xmm6[0x2]
    st0_1, eax_3 = sub_603c71(x87control, 
        150.0 / (xmm1_2 f+ *((edx u>> 0x1f << 3) + &data_624a10))
            * (_mm_cvtepi32_pd(zx.q(eax_1)) f+ *((eax_1 u>> 0x1f << 3) + &data_624a10)), 
        xmm6)
    edx_2 = eax_3
    ecx = 0
    eax = var_8

bool cond:0 = data_13130bc != 0
data_1374094 = edx_2

if (cond:0 || eax == 0xffffffff || eax == 0)
    esi = 0
    data_1372da4 = 1
    edx_2 = 0
    data_1374094 = 0

bool cond:2 = data_1372c24.b == 0
int32_t eax_4 = data_131310c
data_1374088 = 1
data_1374090 = eax_4
data_137408c = esi

if (not(cond:2) && edx_2 u< esi)
    ecx = 1

void* eax_5 = &data_106e754
int32_t i = 0
void* edi = &data_f8d2e0
void* var_c = &data_106e754

do
    if (*eax_5 != 0)
        sub_57b500(eax_5, 1, i, var_8, 0x96)
        eax_5 = var_c
        ecx = 1
        *(edi - 4) = 1
        *edi = 1
    
    eax_5 += 0x42c
    i += 1
    edi += 0x3920
    var_c = eax_5
while (i s< 0x40)

if (data_131d2d0 != 0xffffffff)
    sub_4161c0(eax_5, var_8, 1, 0x96)
    data_131d2e0 = 1
    data_131d2e4 = 1
label_57d2f3:
    char* eax_6 = sub_48d040(data_71929c, &data_7192a0)
    int32_t var_4c = 1
    int32_t var_48_1 = 1
    data_71929c = 0x25
    sub_4d1c30(eax_6, &var_4c, &data_7192a0, 0x40)
    data_7192e0 = 0
else if (ecx != 0)
    goto label_57d2f3
