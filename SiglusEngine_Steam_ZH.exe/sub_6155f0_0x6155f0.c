// 函数: sub_6155f0
// 地址: 0x6155f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* eax_2 = data_bac454
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
HWND hWnd_2 = *(eax_2 + 4)
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1

if (hWnd_2 != 0)
    int32_t var_68_1 = 0
    SetMenu(hWnd_2, nullptr)
    eax_2 = data_bac454

int32_t ecx = *(eax_2 + 4)

if (ecx != 0)
    int32_t var_68_2 = 0x92000000
    int32_t var_6c_2 = 0xfffffff0
    int32_t var_70_1 = ecx
    SetWindowLongW()
    eax_2 = data_bac454

RECT rect
__builtin_memset(&rect, 0, 0x10)
GetClientRect(*(eax_2 + 4), &rect)
uint128_t xmm0
xmm0.d = rect.left
xmm0:4.d = rect.top
xmm0:8.d = rect.right
xmm0:0xc.d = rect.bottom
void* edi = data_bac454
uint128_t var_54 = xmm0
HWND hWnd = *(edi + 4)
POINT point
point.x = xmm0
point.y = _mm_bsrli_si128(xmm0, 4)
ClientToScreen(hWnd, &point)
uint128_t xmm1 = var_54
HWND hWnd_1 = *(edi + 4)
int32_t xmm1_1 = _mm_bsrli_si128(xmm1, 0xc)
RECT rect_1
rect_1.right = _mm_bsrli_si128(xmm1, 8)
rect_1.bottom = xmm1_1
BOOL eax_3
int32_t edx
eax_3, edx = ClientToScreen(hWnd_1, &rect_1.right)
var_54 = zx.o(0)
int32_t var_6c_4
BOOL var_68_6
RECT rect_2

if (arg1 == 0)
    void* eax_4 = data_bac454
    __builtin_memset(&rect_2, 0, 0x10)
    GetWindowRect(*(eax_4 + 4), &rect_2)
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = sx.q(rect_2.right - rect_2.left)
    int32_t eax_11
    edx:eax_11 = sx.q(rect_2.bottom - rect_2.top)
    eax_3 = ((eax_11 - edx) s>> 1) + rect_2.top
    var_68_6 = eax_3
    var_6c_4 = ((eax_7 - edx_1) s>> 1) + rect_2.left
else
    var_68_6 = arg1[1]
    var_6c_4 = *arg1

sub_6c2920(eax_3, edx, &var_54, var_6c_4, var_68_6)
sub_6c1210(var_54)
void* edx_2 = data_bac4a0
void* ecx_2 = data_bac4e4
__builtin_memset(&rect_2, 0, 0x10)
*(edx_2 + 0x40) = 1
*(edx_2 + 0x58) = *(ecx_2 + 0x18)
*(edx_2 + 0x5c) = *(ecx_2 + 0x20)
*(edx_2 + 0x60) = *(ecx_2 + 0x28)
GetClientRect(*(data_bac454 + 4), &rect_2)
void* eax_18 = data_bac4a0
int32_t ecx_4 = rect_2.bottom - rect_2.top
*(eax_18 + 0x30) = rect_2.right - rect_2.left
*(eax_18 + 0x34) = ecx_4
void* eax_19 = data_bac454
__builtin_memset(&rect_1, 0, 0x10)
GetWindowRect(*(eax_19 + 4), &rect_1)
void* edx_5 = data_bac4a0
int32_t ecx_6 = rect_1.right - rect_1.left
*(edx_5 + 0x3c) = rect_1.bottom - rect_1.top
*(edx_5 + 0x68) = *(edx_5 + 0x58)
int32_t eax_23 = *(edx_5 + 0x5c)
*(edx_5 + 0x38) = ecx_6
*(edx_5 + 0x6c) = eax_23
*(edx_5 + 0x70) = *(edx_5 + 0x60)
int32_t result
result.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
