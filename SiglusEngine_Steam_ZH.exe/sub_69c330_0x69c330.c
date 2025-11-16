// 函数: sub_69c330
// 地址: 0x69c330
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9751
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0x32
bool cond:0 = (arg1[0x18c3d].b & 1) == 0
arg1[0x18c3c] = &CCallbackImpl<152>::`vftable'{for `CCallbackBase'}

if (not(cond:0))
    SteamAPI_UnregisterCallback(&arg1[0x18c3c], eax_2)

bool cond:1 = (arg1[0x18c38].b & 1) == 0
arg1[0x18c37] = &CCallbackImpl<16>::`vftable'{for `CCallbackBase'}

if (not(cond:1))
    SteamAPI_UnregisterCallback(&arg1[0x18c37], eax_2)

bool cond:2 = (arg1[0x18c33].b & 1) == 0
arg1[0x18c32] = &CCallbackImpl<24>::`vftable'{for `CCallbackBase'}

if (not(cond:2))
    SteamAPI_UnregisterCallback(&arg1[0x18c32], eax_2)

sub_6399b0(&arg1[0x18a18])
sub_5b6c90(&arg1[0x18a12])

if (arg1[0x18a10] u>= 8)
    j__free(arg1[0x18a0b])

arg1[0x18a10] = 7
arg1[0x18a0f] = 0
arg1[0x18a0b].w = 0
sub_632a40(&arg1[0x189e4])

if (arg1[0x189e2] u>= 8)
    j__free(arg1[0x189dd])

arg1[0x189e2] = 7
arg1[0x189e1] = 0
arg1[0x189dd].w = 0
sub_632940(&arg1[0x189b6])

if (arg1[0x189b4] u>= 8)
    j__free(arg1[0x189af])

arg1[0x189b4] = 7
arg1[0x189b3] = 0
arg1[0x189af].w = 0
sub_639580(&arg1[0x1885f])
sub_6393c0(&arg1[0x187d7])
var_8_1.b = 0x30
sub_6390d0(&arg1[0x15ad9])
sub_638e30(&arg1[0x15aa4])
var_8_1.b = 0x2e
sub_632840(&arg1[0x15a9f])

if (arg1[0x15a9d] u>= 8)
    j__free(arg1[0x15a98])

arg1[0x15a9d] = 7
arg1[0x15a9c] = 0
arg1[0x15a98].w = 0
var_8_1.b = 0x2d
sub_632780(&arg1[0x15a71])

if (arg1[0x15a6f] u>= 8)
    j__free(arg1[0x15a6a])

arg1[0x15a6f] = 7
arg1[0x15a6e] = 0
arg1[0x15a6a].w = 0
sub_550550(&arg1[0x15a23])

if (arg1[0x15a21] u>= 8)
    j__free(arg1[0x15a1c])

arg1[0x15a21] = 7
arg1[0x15a20] = 0
arg1[0x15a1c].w = 0
sub_54ec30(&arg1[0x15947])
sub_63de80(&arg1[0x1591a])
sub_60d350(&arg1[0x15914])

if (arg1[0x15912] u>= 8)
    j__free(arg1[0x1590d])

arg1[0x15912] = 7
arg1[0x15911] = 0
arg1[0x1590d].w = 0
sub_632680(&arg1[0x158e6])

if (arg1[0x158e4] u>= 8)
    j__free(arg1[0x158df])

arg1[0x158e4] = 7
arg1[0x158e3] = 0
arg1[0x158df].w = 0
sub_54ae40(&arg1[0x15890])
sub_638bb0(&arg1[0x155ae])
sub_638780(&arg1[0x155a7])
int32_t eax_5 = arg1[0x15585]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0x15585] = 0
    arg1[0x15586] = 0
    arg1[0x15587] = 0

int32_t eax_6 = arg1[0x15582]

if (eax_6 != 0)
    j__free(eax_6)
    arg1[0x15582] = 0
    arg1[0x15583] = 0
    arg1[0x15584] = 0

int32_t eax_7 = arg1[0x12cfe]

if (eax_7 != 0)
    j__free(eax_7)
    arg1[0x12cfe] = 0
    arg1[0x12cff] = 0
    arg1[0x12d00] = 0

int32_t eax_8 = arg1[0x12cfb]

if (eax_8 != 0)
    j__free(eax_8)
    arg1[0x12cfb] = 0
    arg1[0x12cfc] = 0
    arg1[0x12cfd] = 0

int32_t eax_9 = arg1[0x12cf8]

if (eax_9 != 0)
    j__free(eax_9)
    arg1[0x12cf8] = 0
    arg1[0x12cf9] = 0
    arg1[0x12cfa] = 0

if (arg1[0x12cea] u>= 8)
    j__free(arg1[0x12ce5])

arg1[0x12cea] = 7
arg1[0x12ce9] = 0
arg1[0x12ce5].w = 0
var_8_1.b = 0x1f
sub_6385d0(&arg1[0x12cbd])
var_8_1.b = 0x1e
sub_638530(&arg1[0x12cb8])
int32_t eax_10 = arg1[0x12cb5]

if (eax_10 != 0)
    j__free(eax_10)
    arg1[0x12cb5] = 0
    arg1[0x12cb6] = 0
    arg1[0x12cb7] = 0

int32_t* ecx_20 = arg1[0x12cb2]

if (ecx_20 != 0)
    int32_t* var_30_19 = arg1
    int32_t* var_34_1 = ecx_20
    sub_633270(ecx_20, arg1[0x12cb3])
    j__free(arg1[0x12cb2])
    arg1[0x12cb2] = 0
    arg1[0x12cb3] = 0
    arg1[0x12cb4] = 0

sub_6384d0(&arg1[0x12cad])
int32_t* ecx_22 = arg1[0x12caa]

if (ecx_22 != 0)
    int32_t* var_30_20 = arg1
    int32_t* var_34_2 = ecx_22
    sub_6331e0(ecx_22, arg1[0x12cab])
    j__free(arg1[0x12caa])
    arg1[0x12caa] = 0
    arg1[0x12cab] = 0
    arg1[0x12cac] = 0

int32_t** eax_11 = arg1[0x12ca8]
int32_t var_18
sub_641d30(&arg1[0x12ca8], &var_18, *eax_11, eax_11)
j__free(arg1[0x12ca8])
sub_54ed60(&arg1[0x12c7b])
sub_54ed60(&arg1[0x12c4d])
sub_63c490(&arg1[0x12c3e])
sub_63c350(&arg1[0x12c32])
int32_t eax_12 = arg1[0x12c2f]

if (eax_12 != 0)
    j__free(eax_12)
    arg1[0x12c2f] = 0
    arg1[0x12c30] = 0
    arg1[0x12c31] = 0

sub_6c9260(&arg1[0x12c24])
var_8_1.b = 0x14
void* ecx_29 = arg1[0x12c21]

if (ecx_29 != 0)
    int32_t var_30_24 = var_18
    void* var_34_4 = ecx_29
    sub_633220(ecx_29, arg1[0x12c22])
    j__free(arg1[0x12c21])
    arg1[0x12c21] = 0
    arg1[0x12c22] = 0
    arg1[0x12c23] = 0

HICON hIcon = arg1[0x12c1f]

if (hIcon != 0)
    DestroyIcon(hIcon)
    arg1[0x12c1f] = 0

HICON hIcon_1 = arg1[0x12c20]

if (hIcon_1 != 0)
    DestroyIcon(hIcon_1)
    arg1[0x12c20] = 0

var_8_1.b = 0x12
void* ecx_30 = arg1[0x12c1a]

if (ecx_30 != 0)
    int32_t var_30_27 = var_18
    void* var_34_5 = ecx_30
    sub_633220(ecx_30, arg1[0x12c1b])
    j__free(arg1[0x12c1a])
    arg1[0x12c1a] = 0
    arg1[0x12c1b] = 0
    arg1[0x12c1c] = 0

sub_638310(&arg1[0x12c02])
sub_6382a0(&arg1[0x12be7])
sub_6381b0(&arg1[0x12ac0])
sub_637f30(&arg1[0x12a2c])
sub_637ce0(&arg1[0x12a02])
sub_637b50(&arg1[0x1296e])
sub_637980(&arg1[0x12963])
void* ecx_38 = arg1[0x12960]

if (ecx_38 != 0)
    int32_t var_30_28 = var_18
    void* var_34_6 = ecx_38
    sub_6427c0(ecx_38, arg1[0x12961])
    j__free(arg1[0x12960])
    arg1[0x12960] = 0
    arg1[0x12961] = 0
    arg1[0x12962] = 0

int32_t eax_13 = arg1[0xd85d]

if (eax_13 != 0)
    _free(eax_13)
    arg1[0xd85d] = 0

if (*(arg1 + 0x3616d) != 0)
    closesocket(arg1[0xd85c])
    *(arg1 + 0x3616d) = 0

if (arg1[0xd85b].b != 0)
    WSACleanup()
    arg1[0xd85b].b = 0

arg1[0xd85e] = 0
var_8_1.b = 8
sub_6372e0(&arg1[0x7b4])
arg1[0x790] = &NT3::C_window::`vftable'{for `NT3::C_window_base'}

if (arg1[0x7b3] u>= 8)
    j__free(arg1[0x7ae])

arg1[0x7b3] = 7
arg1[0x7b2] = 0
arg1[0x7ae].w = 0
sub_6bfb10(&arg1[0x790])
var_8_1.b = 6
sub_636800(&arg1[0x6a])
sub_631440(&arg1[0x67])
sub_634480(&arg1[0x3d])
var_8_1.b = 3
int32_t** eax_14 = arg1[0x3b]
sub_5d47e0(&arg1[0x3b], &var_18, *eax_14, eax_14)
j__free(arg1[0x3b])
sub_641a90(&arg1[0x38])
var_8_1.b = 1
int32_t** eax_15 = arg1[0x32]
sub_5d47e0(&arg1[0x32], &var_18, *eax_15, eax_15)
j__free(arg1[0x32])
int32_t eax_16 = arg1[0x2f]

if (eax_16 != 0)
    j__free(eax_16)
    arg1[0x2f] = 0
    arg1[0x30] = 0
    arg1[0x31] = 0

sub_634480(&arg1[4])
int32_t result = *arg1

if (result != 0)
    result = j__free(result)
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
