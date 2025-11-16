// 函数: sub_4df280
// 地址: 0x4df280
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_60574d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t esi
int32_t var_20 = esi
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* ebx = arg1

if (ebx == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x80004003

int32_t var_2c = 0x640fa8
int32_t result = 0x8007000e
*ebx = 0
arg1 = 0x8007000e
int32_t var_8_1 = 0
struct IUnknown::ATL::CComPolyObject<class ATL::CAxHostWindow>::VTable** eax_4
int32_t* ebp
eax_4, ebp = operator new(esi, 0x8007000e, 0xf4)
struct IUnknown::ATL::CComPolyObject<class ATL::CAxHostWindow>::VTable** esi_2 = eax_4
ebp[-5] = esi_2

if (esi_2 == 0)
    esi_2 = nullptr
else
    esi_2[1] = 0
    *esi_2 = &ATL::CComPolyObject<class ATL::CAxHostWindow>::`vftable'{for `IUnknown'}
    sub_4df6f0(&esi_2[2], esi_2)
    ebp[-1].b = 2
    (*(*data_20f33f8 + 4))(var_14)

ebp[-1] = 0xffffffff

if (esi_2 != 0)
    esi_2[1] = &esi_2[1]->vFunc_0 + 1
    esi_2[1] -= 1
    result = (*esi_2)->vFunc_0(esi_2, &data_61d6e0, ebx)
    
    if (result != 0)
        (*esi_2)->vFunc_3(1)

fsbase->NtTib.ExceptionList = ebp[-3]
*ebp
return result
