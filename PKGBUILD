# Maintainer: Lyr <lyr-7d1h@pm.me>

pkgname=paranoid_slock
pkgver=1.4
pkgrel=3
pkgdesc="A simple screen locker for X - Configured for paranoids"
arch=('x86_64')
url="https://tools.suckless.org/slock"
license=('MIT')
depends=('libxext' 'libxrandr')

package() {
    make DESTDIR="$pkgdir" clean install
    install -m644 -D LICENSE "$pkgdir/usr/share/licenses/$pkgname/LICENSE"
}
