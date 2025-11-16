// 函数: sub_57ce50
// 地址: 0x57ce50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_137408c
void* edx = arg1
int32_t ecx = 0
void* var_8 = edx
int32_t edi = 0x96
int32_t esi

if (eax == 0)
    esi = 0
    
    if (data_1374088 == 1)
        esi = 0x96
else
    double xmm1_3 = _mm_cvtepi32_pd(zx.q(eax)) f+ *((eax u>> 0x1f << 3) + &data_624a10)
    int32_t eax_2 = data_1374094
    int32_t eax_4
    int16_t x87control
    int80_t st0_1
    uint64_t xmm6[0x2]
    st0_1, eax_4 = sub_603c71(x87control, 
        150.0 / xmm1_3 * (_mm_cvtepi32_pd(zx.q(eax_2)) f+ *((eax_2 u>> 0x1f << 3) + &data_624a10)), 
        xmm6)
    edx = var_8
    esi = eax_4
    ecx = 0

bool cond:0 = data_13130bc != 0
data_1374094 = esi

if (cond:0 || edx == 0xffffffff || edx == 0)
    edi = 0
    esi = 0
    data_1374094 = 0
    data_1372da4 = 0

bool cond:2 = data_1372c24.b == 0
void* eax_5 = data_131310c
data_1374088 = 0
data_1374090 = eax_5
data_137408c = edi

if (not(cond:2))
    eax_5 = 1
    
    if (esi != 0)
        ecx = 1

int32_t i = 0
void* esi_1 = &data_f8d2dc

do
    if (*esi_1 == 1)
        eax_5 = sub_57b500(eax_5, nullptr, i, edx, 0x96)
        *esi_1 = 0
        ecx = 1
        *(esi_1 + 4) = 0
    
    edx = var_8
    i += 1
    esi_1 += 0x3920
while (i s< 0x40)

if (data_131d2d0 != 0xffffffff && data_131d2e4 != 0)
    sub_4161c0(eax_5, edx, 0, 0x96)
    data_131d2e0 = 0
    data_131d2e4 = 0
label_57cf9e:
    char* eax_6 = sub_48d040(data_71929c, &data_7192a0)
    int32_t var_4c = 0
    int32_t var_48_1 = 1
    data_71929c = 0x25
    sub_4d1c30(eax_6, &var_4c, &data_7192a0, 0x40)
    data_7192e0 = 0
else if (ecx != 0)
    goto label_57cf9e
