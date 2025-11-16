// 函数: sub_75431d
// 地址: 0x75431d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* esi = &__getptd()[0x27]
int32_t ecx = *(esi + 0x10)
int32_t ecx_1 = neg.d(ecx)
void var_f8
int32_t eax_3 =
    sub_75521f(arg1, (sbb.d(ecx_1, ecx_1, ecx != 0) & 0xfffff002) + 0x1001, &var_f8, 0x78)
int32_t result

if (eax_3 != 0)
    if (sub_75d36c(*esi, &var_f8) == 0)
        if (_wcsncpy_s(esi + 0x250, 0x55, arg1, _wcslen(arg1) + 1) != 0)
            int32_t var_114_2
            __builtin_memset(&var_114_2, 0, 0x14)
            __invoke_watson()
            noreturn
        
        *(esi + 8) |= 4
    
    result = not.d(*(esi + 8) u>> 2) & 1
else
    *(esi + 8) &= eax_3
    result = eax_3 + 1

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
