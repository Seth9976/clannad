// 函数: sub_4d9cda
// 地址: 0x4d9cda
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t ebx = 0
int16_t ecx = 0
int32_t i = 1
int32_t edi
int32_t var_30 = edi
int16_t* result = arg2 + 0x1034

do
    int32_t edi_1
    edi_1.w = *result
    edi_1.w += ecx
    ecx = (edi_1 << 1).w
    int16_t var_28[0x10]
    var_28[i] = ecx
    i += 1
    result = &result[1]
while (i s<= 0xf)

if (arg3 s>= 0)
    do
        uint32_t ecx_1 = zx.d(*(arg1 + (ebx << 2) + 2))
        
        if (ecx_1 != 0)
            int32_t __saved_ebp
            int16_t edx = *(&__saved_ebp + (ecx_1 << 1) - 0x24)
            *(&__saved_ebp + (ecx_1 << 1) - 0x24) = edx + 1
            result = sub_4d98eb(edx.b, ecx_1)
            *(arg1 + (ebx << 2)) = result.w
        
        ebx += 1
    while (ebx s<= arg3)

sub_745f2b(__security_cookie_1)
return result
