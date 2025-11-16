// 函数: sub_6f3dd0
// 地址: 0x6f3dd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd718
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
char var_d4 = eax_2.b
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t esi = arg4
uint32_t var_bc = esi
int32_t var_b8 = 0
int32_t var_b4 = 0
TEXTMETRICW lptm
lptm.tmHeight = 0
var_90
_memset(&var_90, 0, 0x38)
GetTextMetricsW(arg8, &lptm)
int32_t var_24 = 0x10000
uint32_t cjBuffer_2 = 0
int32_t var_1c = 0
int32_t var_34 = 0
int16_t var_30 = 0
int16_t var_2e = 0xffff
int32_t var_28 = 0
GLYPHMETRICS lpgm
lpgm.gmBlackBoxX = 0
int32_t* eax_4 = &var_34

if (arg7 == 0)
    eax_4 = &var_24

int32_t var_18 = 0x10000
int32_t var_2c = 0x10000
lpgm.gmBlackBoxY = 0
lpgm.gmptGlyphOrigin.x = 0
lpgm.gmptGlyphOrigin.y = 0
lpgm.gmCellIncX = 0
lpgm.gmCellIncY = 0
int128_t xmm0 = *eax_4
uint32_t uChar = zx.d(arg3)
MAT2 lpmat2
lpmat2.eM11.fract = xmm0.w
lpmat2.eM11.value = xmm0:2.w
lpmat2.eM12.fract = xmm0:4.w
lpmat2.eM12.value = xmm0:6.w
lpmat2.eM21.fract = xmm0:8.w
lpmat2.eM21.value = xmm0:0xa.w
lpmat2.eM22.fract = xmm0:0xc.w
lpmat2.eM22.value = xmm0:0xe.w
uint32_t cjBuffer = GetGlyphOutlineW(arg8, uChar, GGO_GRAY8_BITMAP, &lpgm, 0, nullptr, &lpmat2)
uint32_t cjBuffer_1 = cjBuffer

if (cjBuffer == 0xffffffff)
    cjBuffer.b = 0
else if (cjBuffer != 0)
    sub_5b9470(&cjBuffer_2, cjBuffer)
    int32_t var_8_1 = 0
    uint32_t pvBuffer_1 = cjBuffer_2
    uint32_t pvBuffer = pvBuffer_1
    
    if (pvBuffer_1 == var_1c)
        pvBuffer = 0
    
    GetGlyphOutlineW(arg8, uChar, GGO_GRAY8_BITMAP, &lpgm, cjBuffer, pvBuffer, &lpmat2)
    int32_t x = lpgm.gmptGlyphOrigin.x
    double xmm0_4 = _mm_cvtepi32_pd(zx.q(esi)) * 0.85999999999999999 + 0.5
    int32_t edi_3
    
    if (arg7 == 0)
        edi_3 = int.d(xmm0_4) - lpgm.gmptGlyphOrigin.y
    else
        x += esi - int.d(xmm0_4)
        edi_3 = neg.d(lpgm.gmptGlyphOrigin.y)
    
    int32_t x_1 = x
    void* eax_13 = (lpgm.gmBlackBoxX + 3) & 0xfffc
    uint32_t gmBlackBoxY = lpgm.gmBlackBoxY
    uint32_t gmBlackBoxY_2 = divu.dp.d(0:cjBuffer_1, eax_13)
    void* gmBlackBoxY_1 = gmBlackBoxY
    int32_t var_a0_1 = edi_3
    
    if (gmBlackBoxY_2 s<= gmBlackBoxY)
        gmBlackBoxY_2 = gmBlackBoxY_1
    else
        gmBlackBoxY_1 = gmBlackBoxY_2
        edi_3 += gmBlackBoxY - gmBlackBoxY_2
        var_a0_1 = edi_3
    
    if (edi_3 s< 0)
        int32_t ecx_6 = neg.d(edi_3)
        edi_3 = 0
        var_b4 = ecx_6
        var_a0_1 = 0
    
    if (x_1 s< 0)
        int32_t x_2 = x_1
        x_1 = 0
        var_b8 = neg.d(x_2)
    
    int32_t cjBuffer_3 = gmBlackBoxY_2 + edi_3
    uint32_t* ecx_8 = &cjBuffer_1
    cjBuffer_1 = cjBuffer_3
    
    if (esi s>= cjBuffer_3)
        ecx_8 = &var_bc
    
    uint32_t eax_15 = *ecx_8
    uint32_t var_98_1 = eax_15
    
    if (arg6 == 1)
        eax_15 += 1
    else if (arg6 == 2)
        eax_15 += 2
    else if (arg6 == 3)
        eax_15 += 3
    
    char eax_16
    int32_t ecx_14
    eax_16, ecx_14 = sub_6f3610(arg1, eax_15, eax_15, 0, 0x400, 0x15, 1)
    
    if (eax_16 == 0)
    label_6f4194:
        cjBuffer = cjBuffer_2
        
        if (cjBuffer != 0)
            j__free(cjBuffer)
        
        cjBuffer.b = 0
    else
        int32_t var_d8_4 = 0
        int32_t var_dc_2 = ecx_14
        void var_c4
        
        if (sub_6f3b20(arg1, ecx_14, &var_c4) == 0)
            goto label_6f4194
        
        int32_t ecx_19
        char* var_c0
        
        if (arg6 - 1 u> 2)
            uint32_t cjBuffer_5 = cjBuffer_2
            uint32_t cjBuffer_6 = cjBuffer_5
            
            if (cjBuffer_5 == var_1c)
                cjBuffer_6 = nullptr
            
            ecx_19 = sub_6b0470(var_c0, arg1[3], arg1[4], cjBuffer_6, eax_13, gmBlackBoxY_1, x_1, 
                edi_3, arg5, var_d4, arg2)
        else
            sub_5b9470(&var_30, (var_98_1 * var_98_1) << 2)
            uint32_t cjBuffer_4 = cjBuffer_2
            uint32_t cjBuffer_7 = cjBuffer_4
            char* edi_5 = var_30.d
            
            if (cjBuffer_4 == var_1c)
                cjBuffer_7 = nullptr
            
            char* eax_23 = edi_5
            
            if (edi_5 == var_2c)
                eax_23 = nullptr
            
            sub_6b0470(eax_23, var_98_1, var_98_1, cjBuffer_7, eax_13, gmBlackBoxY_1, x_1, 
                var_a0_1, arg5, var_d4, arg2)
            int32_t var_d8_7 = arg6
            
            if (edi_5 == var_2c)
                edi_5 = nullptr
            
            sub_6b0a80(var_c0, arg1[3], arg1[4], edi_5, var_98_1, var_98_1)
            ecx_19 = sub_538150(&var_30)
        arg1[7] = var_b8
        int32_t var_d8_9 = ecx_19
        arg1[8] = var_b4
        
        if (sub_6f3c40(arg1) == 0)
            goto label_6f4194
        
        sub_538150(&cjBuffer_2)
        arg1[9].b = 1
        cjBuffer.b = 1
else
    if (arg6 == 1)
        esi += 1
    else if (arg6 == 2)
        esi += 2
    else if (arg6 == 3)
        esi += 3
    
    if (sub_6f3610(arg1, esi, esi, 0, 0x400, 0x15, 1).b != 0)
        arg1[9].b = 1
        cjBuffer.b = 1
    else
        cjBuffer.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return cjBuffer
