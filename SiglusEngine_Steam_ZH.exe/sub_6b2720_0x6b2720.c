// 函数: sub_6b2720
// 地址: 0x6b2720
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* ebx = data_bac4c8
int32_t edi = ebx[0x1440]
int32_t esi = ebx[0x1441]
POINT point
__builtin_memset(&point, 0, 8)
GetCursorPos(&point)
ebx[0x1440] = point.x
ebx[0x1441] = point.y
char var_10c = 0
char var_10b
_memset(&var_10b, 0, 0xff)

if (GetActiveWindow() != 0)
    for (int32_t nVirtKey = 0; nVirtKey s< 0x100; nVirtKey += 1)
        (&var_10c)[nVirtKey] = (GetKeyState(nVirtKey) u>> 8).b & 0x80

int32_t eax_7 = ebx[0x1440]
ebx[0x1447] += ebx[0x1441] - esi
ebx[0x1446] += eax_7 - edi
int32_t eax_9 = ebx[0x1440]
ebx[0x145b] += ebx[0x1441] - esi
ebx[0x145a] += eax_9 - edi
int32_t eax_10
eax_10.b = var_10b
char var_10e = eax_10.b

if (ebx[0x1442] == 1 && eax_10.b s>= 0)
    sub_6b1e50(&ebx[0x1442])

char var_10a
eax_10.b = var_10a
char var_10f = eax_10.b

if (ebx[0x1456] == 1 && eax_10.b s>= 0)
    sub_6b1e50(&ebx[0x1456])

char var_108
eax_10.b = var_108
char var_10d = eax_10.b

if (ebx[0x146a] == 1 && eax_10.b s>= 0)
    sub_6b1e50(&ebx[0x146a])

int32_t i = 0
void* edi_1 = &ebx[0x1480]

do
    if (*edi_1 == 1 && ((&var_10c)[i] & 0x80) == 0)
        sub_6b1e50(edi_1)
    
    i += 1
    edi_1 += 0x50
while (i s< 0x100)

sub_6b24d0(ebx)
void* eax_11
eax_11.b = var_10e
void* edx_1 = &ebx[0x40]
eax_11.b &= 0x80
ebx[2] = neg.d(sbb.d(eax_11, eax_11, 0 u< eax_11.b))
int32_t eax_13
eax_13.b = var_10f
eax_13.b &= 0x80
ebx[0x16] = neg.d(sbb.d(eax_13, eax_13, 0 u< eax_13.b))
int32_t eax_15
eax_15.b = var_10d
eax_15.b &= 0x80
int32_t i_1 = 0
ebx[0x2a] = neg.d(sbb.d(eax_15, eax_15, 0 u< eax_15.b))
int32_t result

do
    result.b = (&var_10c)[i_1]
    edx_1 += 0x50
    result.b &= 0x80
    ebx.b = 0
    i_1 += 1
    result = neg.d(sbb.d(result, result, 0 u< result.b))
    *(edx_1 - 0x50) = result
while (i_1 s< 0x100)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
