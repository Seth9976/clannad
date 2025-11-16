// 函数: sub_4a6f60
// 地址: 0x4a6f60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg4
int32_t edi = arg2
arg2.b = arg3
char var_9 = arg2.b
int32_t ecx

if (esi s<= 0)
    ecx = data_907ef0
else
    int32_t eax = data_907ee8
    
    if (eax == 0)
        ecx = 0
        
        if (data_907ee4 == 1)
            ecx = esi
        
        data_907ef0 = ecx
    else
        double xmm1_3 = _mm_cvtepi32_pd(zx.q(eax)) f+ *((eax u>> 0x1f << 3) + &data_624a10)
        double xmm0_2 = _mm_cvtepi32_pd(zx.q(esi))
        int32_t eax_2 = data_907ef0
        int32_t eax_4
        int16_t x87control
        int80_t st0_1
        uint64_t xmm6[0x2]
        st0_1, eax_4, arg2 = sub_603c71(x87control, 
            xmm0_2 / xmm1_3
                * (_mm_cvtepi32_pd(zx.q(eax_2)) f+ *((eax_2 u>> 0x1f << 3) + &data_624a10)), 
            xmm6)
        arg2.b = var_9
        ecx = eax_4
        data_907ef0 = ecx

if (data_13130bc != 0 || esi s<= 0 || edi == 0xffffffff)
    ecx = 0
    esi = 0
    data_907ef0 = 0
    int32_t eax_5
    eax_5.b = arg2.b == 1
    data_1372da4 = eax_5

bool cond:0 = data_1372c24.b == 0
int32_t eax_6 = data_131310c
data_907ee4 = arg2.b
data_907eec = eax_6
data_907ee8 = esi

if (not(cond:0))
    if (arg2.b != 1)
        if (ecx != 0)
            eax_6.b = 1
            return 
    else if (ecx u< esi)
        eax_6.b = 1
        return 

eax_6.b = 0
