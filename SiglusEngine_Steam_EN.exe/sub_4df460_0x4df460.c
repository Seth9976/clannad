// 函数: sub_4df460
// 地址: 0x4df460
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1

if (arg2 == 0)
    *ebx = arg2
    return 

int16_t* eax = arg2
void* edx = &eax[1]

do
    arg1.w = *eax
    eax = &eax[1]
while (arg1.w != 0)

int32_t* var_14 = arg1
int32_t cbMultiByte_1 = (((eax - edx) s>> 1) + 1) << 2
sub_4e0150(&ebx[1], cbMultiByte_1, ebx, &ebx[1])
int32_t eax_5 = WideCharToMultiByte(arg3, 0, arg2, ((eax - edx) s>> 1) + 1, *ebx, cbMultiByte_1, 
    nullptr, nullptr)
int32_t esi_1 = neg.d(eax_5)
int32_t esi_2 = sbb.d(esi_1, esi_1, eax_5 != 0)
int32_t esi_3 = esi_2 + 1

if (esi_2 == 0xffffffff)
    return 

if (GetLastError() == 0x7a)
    int32_t cbMultiByte
    int32_t ecx_1
    cbMultiByte, ecx_1 =
        WideCharToMultiByte(arg3, 0, arg2, ((eax - edx) s>> 1) + 1, nullptr, 0, nullptr, nullptr)
    int32_t var_14_1 = ecx_1
    sub_4e0150(&ebx[1], cbMultiByte, ebx, &ebx[1])
    eax_5 = WideCharToMultiByte(arg3, 0, arg2, ((eax - edx) s>> 1) + 1, *ebx, cbMultiByte, nullptr, 
        nullptr)
    int32_t esi_6 = neg.d(eax_5)
    esi_3 = sbb.d(esi_6, esi_6, eax_5 != 0) + 1

if (esi_3 != 0)
    sub_4d9340()
    noreturn
