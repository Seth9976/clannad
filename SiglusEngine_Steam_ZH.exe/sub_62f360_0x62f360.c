// 函数: sub_62f360
// 地址: 0x62f360
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x63104) != 0)
    sub_6230c0(arg1)
    
    if (*(data_bac504 + 0x63104) != 0)
        sub_652570()
        ___std_fs_get_file_attributes_by_handle@8()
        sub_653870()
        sub_654050()
    
    sub_683a30()

sub_6839b0()
void* edi = data_bac454
HWND hWnd = *(edi + 4)

if (hWnd != 0 && (GetWindowLongW(hWnd, 0xfffffff0) & 0x10000000) s> 0)
    ShowWindow(*(edi + 4), SW_HIDE)

HWND hWnd_1 = *(data_bac454 + 4)

if (hWnd_1 != 0)
    SetMenu(hWnd_1, nullptr)

sub_6a9510(data_bac454 + 0x1af0)
void* eax_6 = data_bac454
HWND hWnd_3 = *(eax_6 + 4)

if (hWnd_3 != 0)
    SetClassLongW(hWnd_3, 0xfffffff2, 0)
    eax_6 = data_bac454

HWND hWnd_2 = *(eax_6 + 4)

if (hWnd_2 != 0)
    SetClassLongW(hWnd_2, 0xffffffde, 0)

sub_5fdca0(arg1 + 0x6217c)
sub_6dfa20()
int32_t* ecx_3 = data_4ebe490

if (ecx_3 != 0)
    (*(*ecx_3 + 8))(ecx_3)
    data_4ebe490 = 0

int32_t* ecx_4 = data_4ebe48c

if (ecx_4 != 0)
    ecx_4 = (*(*ecx_4 + 8))(ecx_4)
    data_4ebe48c = 0

int32_t* eax_9 = data_b89654
data_b89654 = 0

if (eax_9 != 0)
    ecx_4 = (*(*eax_9 + 8))(eax_9)

int32_t var_30
int32_t var_40_4 = var_30
int32_t* var_44_4 = ecx_4
sub_54d680(data_b89658, data_b8965c)
data_b8965c = data_b89658
int32_t* eax_11 = data_4ebe4b0
data_4ebe4b0 = 0

if (eax_11 != 0)
    (*(*eax_11 + 8))(eax_11)

HGDIOBJ h = *(arg1 + 0x4b098)

if (h != 0)
    SelectObject(*(arg1 + 0x4b090), h)
    *(arg1 + 0x4b098) = 0

HGDIOBJ ho = *(arg1 + 0x4b094)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x4b094) = 0

HDC hdc = *(arg1 + 0x4b090)

if (hdc != 0)
    DeleteDC(hdc)
    *(arg1 + 0x4b090) = 0

SteamAPI_Shutdown(eax_2)
int32_t var_18 = 7
*(data_bac4a0 + 0x1eb) = 1
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, "hQf0n0", 0xf)
int32_t var_8_1 = 0
sub_684160(data_bac424, 5, &var_2c)

if (var_18 u>= 8)
    j__free(var_2c.d)

char* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
