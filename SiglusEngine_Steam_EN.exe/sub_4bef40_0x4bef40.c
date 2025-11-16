// 函数: sub_4bef40
// 地址: 0x4bef40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
uint32_t mciId = __security_cookie ^ &__saved_ebp
uint32_t mciId_1 = mciId

if (data_1bfe268 != 0xffffffff)
    sub_4bf970()
    mciId = data_1bfe268
    
    if (mciId != 0xffffffff)
        int32_t var_c_1 = 0
        int64_t dwParam2 = 0
        mciId = mciSendCommandA(mciId, 0x804, 2, &dwParam2)
    
    data_1bfe268 = 0xffffffff
    data_208c70c = 0
    data_208c6ec = 0

sub_5f02dd(mciId_1 ^ &__saved_ebp)
return mciId
