#pragma once

#include <sframe/sframe.h>

namespace sframe {

// This method is exposed to callers so that they can allocate a ciphertext
// buffer of the appropriate size to encrypt a given plaintext.
size_t
overhead(CipherSuite suite);

// These methods are exposed so that callers can derive values for input to
// SFrame
bytes
hkdf_extract(CipherSuite suite, const bytes& salt, const bytes& ikm);

bytes
hkdf_expand(CipherSuite suite,
            const bytes& secret,
            const bytes& info,
            size_t size);

} // namespace sframe
