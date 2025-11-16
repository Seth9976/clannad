// 函数: sub_4c2340
// 地址: 0x4c2340
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
data_641b44 = 0
void* ebx = &data_208cd64
int32_t i_1 = 0x40
void* edi = &data_2092d58
int32_t i

do
    *(ebx - 0xc) = 0
    void* eax_2 = ebx + 0x34
    *(ebx - 0x14) = 0
    int32_t j_1 = 7
    *ebx = 0
    int32_t j
    
    do
        *(eax_2 - 0x1c) = 0
        eax_2 += 4
        *(eax_2 - 4) = 0xff
        j = j_1
        j_1 -= 1
    while (j != 1)
    sub_4d1ba0(eax_2, 0x3b8, edi - 8, j_1.b)
    *(edi - 8) = 0
    *(edi - 4) = 0
    ebx += 0x180
    *edi = 0
    *(edi + 4) = 0
    *(edi + 8) = 0
    *(edi + 0x14) = 0
    *(edi + 0x18) = 0
    *(edi + 0x50) = 0
    *(edi + 0x54) = 0
    *(edi + 0x1c) = 0xffffffff
    *(edi + 0x58) = 0
    edi += 0x3b8
    i = i_1
    i_1 -= 1
while (i != 1)
HANDLE result
int16_t* ecx_2
result, ecx_2 = sub_4c22b0()

if (data_641b5c != 0)
    int32_t var_28
    int32_t* var_38_2 = &var_28
    int16_t var_24
    sub_4c1ac0(&i_1, &var_24, ecx_2, &i_1)
    int16_t eax_4 = var_24
    int16_t ecx_3 = i_1.w
    int32_t esi_1 = var_28
    int16_t var_1a_1 = eax_4
    int16_t var_e_1 = ecx_3
    int16_t var_1c = 1
    int32_t var_18_1 = esi_1
    int32_t eax_7
    int32_t edx_2
    edx_2:eax_7 = sx.q(zx.d(eax_4) * zx.d(ecx_3))
    int16_t eax_9 = ((eax_7 + (edx_2 & 7)) s>> 3).w
    int16_t var_10_1 = eax_9
    int32_t var_14_1 = zx.d(eax_9) * esi_1
    int16_t var_c_1 = 0
    int32_t* eax_12 = data_641b58
    result = (*(*eax_12 + 0x38))(eax_12, &var_1c)
    
    if (data_641b5c != 0)
        data_641b54 = CreateSemaphoreA(nullptr, 1, 1, nullptr)
        data_641b48 = 0
        result = CreateThread(nullptr, 0, sub_4c20e0, nullptr, THREAD_CREATE_RUN_IMMEDIATELY, 
            &data_641b4c)
        data_641b50 = result

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
