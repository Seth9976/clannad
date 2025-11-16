// 函数: sub_699a00
// 地址: 0x699a00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = &ATL::CRegObject::`vftable'{for `IRegistrarBase'}
EnterCriticalSection(&arg1[4])
sub_6997f0(&arg1[1])
LeaveCriticalSection(&arg1[4])

if (arg1[4]:0x18.b != 0)
    arg1[4]:0x18.b = 0
    DeleteCriticalSection(&arg1[4])

sub_6997f0(&arg1[1])
int32_t eax = arg1[1]

if (eax != 0)
    _free(eax)
    arg1[1] = 0

int32_t result = arg1[2]

if (result != 0)
    result = _free(result)
    arg1[2] = 0

arg1[3] = 0
return result
